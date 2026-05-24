// 300 leetcode

// Longest Increasing subsequence  // return the length of the longest strictly increasing subsequence.

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // dp[i] means:
    // longest increasing subsequence ending at index i

    vector<int> dp(n, 1);

    // compare every element with previous elements
    for(int i = 1; i < n; i++) {

        for(int j = 0; j < i; j++) {

            // increasing condition
            if(nums[i] > nums[j]) {

                // take maximum length
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    // find maximum value in dp
    int ans = 0;

    for(int i = 0; i < n; i++) {
        ans = max(ans, dp[i]);
    }

    cout << ans;

    return 0;
}





























// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     vector<int> nums;

//     int x;

//     // take all input values
//     while(cin >> x) {
//         nums.push_back(x);
//     }

//     // automatically calculate size
//     int n = nums.size();

//     // every element itself is LIS of length 1
//     vector<int> dp(n, 1);

//     // check every element
//     for(int i = 1; i < n; i++) {

//         // compare with previous elements
//         for(int j = 0; j < i; j++) {

//             // increasing condition
//             if(nums[i] > nums[j]) {

//                 // update longest length
//                 dp[i] = max(dp[i], dp[j] + 1);
//             }
//         }
//     }

//     // find maximum LIS length
//     int ans = 0;

//     for(int i = 0; i < n; i++) {
//         ans = max(ans, dp[i]);
//     }

//     cout << ans;

//     return 0;
// }