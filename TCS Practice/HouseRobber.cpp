
// leetcode 198

// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     int n;
//     cin >> n;

//     vector<int> arr(n);

//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     if(n == 1) {
//         cout << arr[0];
//         return 0;
//     }

//     int prev2 = arr[0];
//     int prev1 = max(arr[0], arr[1]);

//     for(int i = 2; i < n; i++) {

//         int pick = arr[i] + prev2;
//         int notPick = prev1;

//         int curr = max(pick, notPick);

//         prev2 = prev1;
//         prev1 = curr;
//     }

//     cout << prev1;

//     return 0;
// }





#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if(n == 1) {
        cout << arr[0];
        return 0;
    }

    int prev2 = arr[0];
    int prev1 = min(arr[0], arr[1]);

    for(int i = 2; i < n; i++) {

        int pick = arr[i] + prev2;
        int notPick = prev1;

        // ONLY CHANGE HERE
        int curr = min(pick, notPick);

        prev2 = prev1;
        prev1 = curr;
    }

    cout << prev1;

    return 0;
}