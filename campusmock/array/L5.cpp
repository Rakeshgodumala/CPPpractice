// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     int n;
//     cin >> n;

//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     int freq[100] = {0};  // all values start from 0

//     // Only ONE loop
//     for(int i = 0; i < n; i++){
//         freq[arr[i]]++;   // increase count
//     }

//     // print result
//     for(int i = 0; i < 100; i++){
//         if(freq[i] > 0){
//             cout <<   freq[i] << endl;
//         }
//     }

//     return 0;
//   }

  



















#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

  for(int i=0; i<n; i++){

    int cnt = 0;
    for(int j=0; j<n; j++){
      if(arr[i] == arr[j]){
        cnt++;
      }
    }

    if(cnt > (n/2)){
      cout << arr[i] << endl;
      return 0;

    

    }

  }
  cout << "no majority";
    

    return 0;
  }

  