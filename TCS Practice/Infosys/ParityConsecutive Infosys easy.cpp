// Infosys SP/DSE 24th May  2026 Exam  Answer
// Easy 
// #include<bits/stdc++.h> 
// using namespace std; 
// int main(){
//     int n; cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     int blocks = 1;
//     for(int i=1; i<n; i++){
//         blocks += (arr[i]%2 != arr[i-1]%2) ? 1 : 0;
//     }
//     cout << n - blocks;
//     return 0;
 

// }








#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    // Read all numbers
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // First element always starts the first block
    int blocks = 1;
    // Compare current element with previous element
    for(int i = 1; i < n; i++)
    {
        // If parity changes,
        // a new block starts
        if((arr[i] % 2) != (arr[i - 1] % 2))
        {
            blocks++;
        }
    }
    // Print minimum deletions
    cout << n - blocks;

    return 0;
}
