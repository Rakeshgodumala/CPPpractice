// two  frog minimum cost

#include <bits/stdc++.h>
using namespace std;

int solve(int n, int f, int arr[]){
    if(n==0) 
    return 0;
    
    int prev2 = 0;
    int prev1 = arr[0];
    
    for (int i=1; i<n; i++){
        int one = prev1 + arr[i];
        int two = prev2 + arr[i] + f;
        
        int curr;
        if(one<two){
            curr = one;
        }else{
            curr = two;
        }
        
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}

int main(){
    
    int n;
    cin >> n;
    
    int f;
    cin >> f;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    cout <<  solve(n, f, arr);
}