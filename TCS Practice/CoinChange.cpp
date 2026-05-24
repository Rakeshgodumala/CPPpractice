// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     int n;
//     cin >> n;

//     int coin[n];

//     for(int i=0;i<n;i++)
//         cin >> coin[i];

//     int target;
//     cin >> target;

//     int dp[target+1];

//     for(int i=0;i<=target;i++)
//         dp[i] = 1e9;

//     dp[0] = 0;

//     for(int i=1;i<=target;i++) {

//         for(int j=0;j<n;j++) {

//             if(i >= coin[j]) {

//                 dp[i] =
//                 min(dp[i],
//                     dp[i-coin[j]] + 1);
//             }
//         }
//     }

//     cout << dp[target];

//     return 0;
// }





















#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int coin[n];

    for(int i=0;i<n;i++)
        cin >> coin[i];

    int target;
    cin >> target;

    int dp[target+1];

    for(int i=0;i<=target;i++)
        dp[i] = 1e9;

    dp[0] = 0;

    for(int i=1;i<=target;i++) {

        for(int j=0;j<n;j++) {

            if(i >= coin[j]) {

                dp[i] =
                min(dp[i],
                    dp[i-coin[j]] + 1);
            }
        }
    }

    // IMPORTANT FIX
    (dp[target] == 1e9)
    ? cout << -1
    : cout << dp[target];

    return 0;
}