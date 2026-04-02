#include <iostream>
#include <string>
#include <cstdlib>
#include <unordered_map>
#include <sstream>
#include <iomanip>

// URL-decode helper
std::string urldecode(const std::string &src) {
    std::string ret; char ch; int i, ii;
    for (i=0; i<src.length(); i++) {
        if (src[i] == '%') {
            sscanf(src.substr(i+1,2).c_str(), "%x", &ii);
            ch = static_cast<char>(ii);
            ret += ch;
            i = i+2;
        } else if (src[i] == '+') {
            ret += ' ';
        } else {
            ret += src[i];
        }
    }
    return ret;
}

// Parse single param from query string
std::string getParam(const std::string &query, const std::string &key) {
    size_t pos = query.find(key + "=");
    if (pos == std::string::npos) return "";
    pos += key.size() + 1;
    size_t end = query.find('&', pos);
    if (end == std::string::npos) end = query.length();
    return urldecode(query.substr(pos, end - pos));
}

int main() {
    std::cout << "Content-Type: application/json\n\n";

    const char* q = std::getenv("QUERY_STRING");
    if (!q) {
        std::cout << R"({"status":"error","error":"No QUERY_STRING provided."})";
        return 0;
    }
    std::string query(q);

    std::string amountStr = getParam(query, "amount");
    std::string from = getParam(query, "from");
    std::string to = getParam(query, "to");

    if (amountStr.empty() || from.empty() || to.empty()) {
        std::cout << R"({"status":"error","error":"Missing parameters. Required: amount, from, to."})";
        return 0;
    }

    double amount = 0.0;
    try {
        amount = std::stod(amountStr);
    } catch (...) {
        std::cout << R"({"status":"error","error":"Invalid amount."})";
        return 0;
    }

    // Rates = units per 1 USD (approx static values; update as needed)
    std::unordered_map<std::string,double> rate;
    rate["USD"] = 1.0000;
    rate["INR"] = 83.20;
    rate["EUR"] = 0.92;
    rate["GBP"] = 0.79;
    rate["JPY"] = 157.50;
    rate["AUD"] = 1.52;
    rate["CAD"] = 1.35;
    rate["CHF"] = 0.89;
    rate["CNY"] = 7.30;
    rate["SGD"] = 1.36;
    rate["NZD"] = 1.68;
    rate["HKD"] = 7.78;
    rate["AED"] = 3.67;
    rate["SAR"] = 3.76;
    rate["ZAR"] = 19.50;
    rate["BRL"] = 4.95;
    rate["RUB"] = 98.0;
    rate["KRW"] = 1360.0;
    rate["MXN"] = 18.2;
    rate["TRY"] = 37.0;
    rate["PLN"] = 4.15;
    rate["IDR"] = 16000.0;
    rate["THB"] = 36.3;
    rate["MYR"] = 4.80;
    rate["ILS"] = 3.70;
    rate["EGP"] = 31.0;
    // add more currencies here if desired

    // Uppercase keys (just in case)
    for (auto &c : from) c = toupper(c);
    for (auto &c : to) c = toupper(c);

    if (rate.find(from) == rate.end()) {
        std::cout << R"({"status":"error","error":"Unsupported source currency."})";
        return 0;
    }
    if (to != "ALL" && rate.find(to) == rate.end()) {
        std::cout << R"({"status":"error","error":"Unsupported target currency."})";
        return 0;
    }

    // Conversion formula:
    // amount_in_usd = amount / rate[from]
    // result_in_to = amount_in_usd * rate[to]
    double amount_usd = amount / rate[from];
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(4);

    if (to == "ALL") {
        // build JSON with all conversions
        oss << "{\"status\":\"ok\",\"amount\":" << amount << ",\"from\":\"" << from << "\",\"all\":{";
        bool first = true;
        for (auto &p : rate) {
            const std::string &code = p.first;
            double r = p.second;
            double val = amount_usd * r;
            if (!first) oss << ",";
            oss << "\"" << code << "\":" << std::fixed << std::setprecision(4) << val;
            first = false;
        }
        oss << "}}";
        std::cout << oss.str();
        return 0;
    } else {
        double result = amount_usd * rate[to];
        oss << "{\"status\":\"ok\",\"amount\":" << amount << ",\"from\":\"" << from << "\",\"to\":\"" << to << "\",\"result\":" << std::fixed << std::setprecision(4) << result << "}";
        std::cout << oss.str();
        return 0;
    }
}
