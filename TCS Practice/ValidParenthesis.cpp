// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     string s;
//     cin >> s;

//     int a, b;
//     cin >> a >> b;

//     long long cost = 0;

//     int balance = 0;

//     for(int i = 0; i < s.size(); i++) {

//         // opening bracket
//         if(s[i] == '(') {

//             balance++;
//         }

//         // closing bracket
//         else {

//             // matching '(' exists
//             if(balance > 0) {

//                 balance--;
//             }

//             // no matching '('
//             else {

//                 cost += a;
//             }
//         }
//     }

//     // remaining unmatched '('
//     cost += 1LL * balance * b;

//     cout << cost;

//     return 0;
// }


















#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    stack<char> st;

    bool valid = true;

    for(char c : s) {

        // opening brackets
        if(c == '(') {
            st.push(')');
        }

        else if(c == '{') {
            st.push('}');
        }

        else if(c == '[') {
            st.push(']');
        }

        // closing brackets
        else {

            // invalid condition
            if(st.empty() || st.top() != c) {

                valid = false;
                break;
            }

            st.pop();
        }
    }

    // stack should be empty
    if(!st.empty()) {
        valid = false;
    }

    if(valid) {
        cout << "Valid";
    }

    else {
        cout << "Invalid";
    }

    return 0;
}




