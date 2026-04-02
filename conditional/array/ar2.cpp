#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int min_step(int P, int Q, int R) {
    vector<int> v = {P, Q, R};
    sort(v.begin(), v.end());

    if (v[0] == v[1] && v[1] == v[2])
        return 0; // Already equal

    int step = 0;

    while (true) {
        v[0]++;
        v[1]++;
        v[2]--;
        step++;

        sort(v.begin(), v.end());

        if (v[0] == v[1] && v[1] == v[2])
            return step; // All are equal now
        
        if ((v[0] == v[1] && v[1] + 1 == v[2]) || (v[1] == v[2] && v[0] + 1 == v[1])) {
            return -1; // Impossible case
        }

        // Add a safeguard to prevent infinite loop
        if (v[0] == v[1] && v[2] - v[0] > 1)
            return -1;
    }
}

int main() {
    int P, Q, R;
    cout << "Enter three numbers: ";
    cin >> P >> Q >> R;
    
    int result = min_step(P, Q, R);
    cout << "Minimum steps: " << result << "\n";

    return 0;
}
