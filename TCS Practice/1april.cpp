#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    
    for (int i=0; i<n; i++){
        cin >>arr[i];
    }
    int meeting;
    cin >> meeting;
    int count=0;
for(int i=0; i<n; i++){
    if(arr[i]>=meeting){
        count++;
    }
}
    cout << count;
    return 0;
}