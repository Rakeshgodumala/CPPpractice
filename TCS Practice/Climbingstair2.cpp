
// leetcode 70 

// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     int n;
//     cin >> n;

//     if(n == 1) {
//         cout << 1;
//         return 0;
//     }

//     int prev2 = 1;
//     int prev1 = 1;

//     for(int i = 2; i <= n; i++) {

//         int curr = prev1 + prev2;

//         prev2 = prev1;
//         prev1 = curr;
//     }

//     cout << prev1;

//     return 0;
// }









//// Climbing stairs with minimum cost


#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> cost(n);

    for(int i = 0; i < n; i++) {
        cin >> cost[i];
    }

    int prev2 = cost[0];
    int prev1 = cost[1];

    for(int i = 2; i < n; i++) {

        int curr = cost[i] + min(prev1, prev2);

        prev2 = prev1;
        prev1 = curr;
    }

    cout << min(prev1, prev2);

    return 0;
}




/// Climbing stairs with maximum cost  how to do?



// #include <bits/stdc++.h>
// using namespace std;

// int main() {


//     int n;
//     cin >> n;

//     vector<int> cost(n);



//     for(int i = 0; i < n; i++) {
//         cin >> cost[i];
//     }

//     int prev2 = cost[0];
//     int prev1 = cost[1];

//     for(int i = 2; i < n; i++) {
//         int curr = cost[i] + max(prev1, prev2);  /
        

//         prev2 = prev1;

//         prev1 = curr;
//     }

//     cout << max(prev1, prev2);

//     return 0;
// }