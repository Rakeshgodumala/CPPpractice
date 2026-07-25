// Infosys 24th may 2026  || 2nd question Medium Level
// Problem:  Resource Clusters 
// You are given N resource nodes. Each node i has a position X[i] and Value V[i]. You may activate a contiguous group  of nodes if  max(X) - min(X) ≤ D   For each activated group, total value of  node in that  group must be ≥ T.  Each  node can  belong to at most one group. Find maximum number of groups formed.
//  Input Format.
//  First line contain integer N denoting number of nodes . Each line i of the N subsequent lines (where 0 ≤ i < N) contains an integer describing X[i] 
// Each line i of the N subsequent lines (where 0 ≤ i < N) contains an integer describing V[i] 
// The next Iine contains an integer, D, denoting the maximum  allowed position difference. The next line contain an integer T, denoting the minimum required total value.

// Constraints:
// 1 <= N <= 10^5
// 1 <= X[i] <= 10^7
// 1 <= V[i] <= 10^5
// 1 <= D <= 10^5
// 1 <= T <= 10^5

// Sample Test Cases:
// Case 1:
// Input:
// 4  10  20  30  40  5  5  5  5  15  10
// Output: 2
// Explanation:
// Step1: Read inputs N=4
// positons = [10, 20, 30, 40]
// values = [5, 5, 5, 5]
// D = 15 
// T = 10

// Step 2:
// Pair and sort by positon
// (10,5), (20,5), (30,5), (40,5)
// Already sorted
// Step 3:
// Start forming groups
// Window starting at 10:
// Add 10 -> sum = 5
// Add 20 -> difference = 20 – 10 = 10 ≤ 15,
// sum = 10  sum ≥ T,  so group 1 formed using nodes (10,20)
// Reset Window:
// Window starting at 30:
// Add 30 -> sum = 5
// Add 40 -> difference = 40 – 30 = 10 ≤ 15, sum = 10  sum ≥ T  group 2formed using nodes (30, 40)
// No node remain Final answer = 2


// Case 2:
// Input:
// 5  1  2  3  10  11  2  2  2  5  5  2  5
// Output: 3
// Explanation:
// Step1: Read inputs N=5 positons = [1, 2, 3, 10, 11]
// values = [2, 2, 2, 5, 5]
// D = 2 
// T = 5
// Step 2:
// Pair and sort 
// (1, 2), (2 , 2), (3 , 2), (10 , 5), (11 , 5)

// Step 3:
// Form groups:
// Window starting at 1:
// Add 1 -> sum = 2
// Add 2 -> difference =  1 ≤ 2, sum = 4
// Add 3 -> difference =  2 ≤ 2, sum = 6  sum ≥ 5,  so group 1 formed using (1 , 2 , 3)
// Reset Window:
// Window at 10:
// Add 10 -> sum = 5
// Single node satisfies sum ≥ T  group 2 formed using (10)

// Reset Window:
// Window at 11:
// Add 11 -> sum = 5
// Single node satisfies sum ≥ T  group 3 formed using (11)
// Final answer = 3


// Case 3: 
// Input:
// 6  1  3  5  7  9  11  1  2  3  4  5  6  4  7
// Output: 2







#include<bits/stdc++.h> 
using namespace std; 

int main(){
    int n; cin >> n;
   vector <pair <int, int>>arr(n);
   for(int i=0; i<n; i++){
       cin >> arr[i].first;
   }
   
   for(int i=0; i<n; i++){
       cin >> arr[i].second;
   }
   
   int D, T;
   cin >> D >> T;
   sort(arr.begin(), arr.end());
   int group = 0;
   int i=0;
   while(i<n){
       int sum = 0;
       int start = arr[i].first;
       int j = i;
       while(j<n && arr[j].first - start <= D){
           sum += arr[j].second;
           if(sum >= T){
               group++;
               break;
           }
           j++;
       }
       i = (sum >=T) ? j+1 : n;
       cout << group;
   }
    return 0;
    
}



This code will solve only 8 test cases this is greddy approach?

Now, DP approach

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int,int>> arr(N);

    // Read positions
    for(int i = 0; i < N; i++)
        cin >> arr[i].first;

    // Read values
    for(int i = 0; i < N; i++)
        cin >> arr[i].second;

    int D, T;
    cin >> D >> T;

    // Sort by position
    sort(arr.begin(), arr.end());

    vector<int> pos(N), val(N);

    for(int i = 0; i < N; i++) {
        pos[i] = arr[i].first;
        val[i] = arr[i].second;
    }

    // endIndex[i] = minimum ending index of a valid group starting at i
    vector<int> endIndex(N, -1);

    long long sum = 0;
    int r = 0;

    for(int l = 0; l < N; l++) {

        if(r < l) {
            r = l;
            sum = 0;
        }

        // Expand window
        while(r < N &&
              pos[r] - pos[l] <= D &&
              sum < T) {

            sum += val[r];
            r++;
        }

        if(sum >= T)
            endIndex[l] = r - 1;

        // Remove left element before moving l
        if(r > l)
            sum -= val[l];
    }

    // DP
    vector<int> dp(N + 1, 0);

    for(int i = N - 1; i >= 0; i--) {

        // Option 1 : Skip this node
        dp[i] = dp[i + 1];

        // Option 2 : Form group starting here
        if(endIndex[i] != -1)
            dp[i] = max(dp[i],
                        1 + dp[endIndex[i] + 1]);
    }

    cout << dp[0];

    return 0;
}
