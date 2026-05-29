// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//   int n = 9;


//   int arr[n] = {1,2,3,4,5,6,7,8,9};
//   int sum = 0;
//   // for(int i=0; i<n; i++){
//   //   sum = sum +arr[i];
//   // }
//   // int avg; 
//   // avg = sum/n;
// bool isprime = true;
//   for (int i=2;i<=n; i++){
//    if(i%2==0){
//     cout << i << "even num and not prime" << endl;
//    }else{
//     cout << i << "odd num and prime" << endl;
//    }


//   }
// // cout << "sum: " <<sum << endl;
// // cout << "avg: " << avg <<endl;
//   return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
    
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
    
    
//     int x;
//     cin >> x;
//     for(int i=0; i<n; i++){
//         if(arr[i] == x ){
//             cout << i <<" ";
//             return 0;
//         }
//     }
//     cout << -1<< endl;
  
    
    
//     return 0;
    
// }

































// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
    
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
    
    
//     int x;
//     cin >> x;
//     int index = -1;
//     for(int i=0; i<n; i++){
//         if(arr[i] == x ){
//             index = i;
            
            
          
//         }
//     }
//     cout << index<< endl;
  
    
    
//     return 0;
    
// }


























// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
    
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
    
    
//     int x;
//     cin >> x;
//     int count = 0;
//     for(int i=0; i<n; i++){
//         if(arr[i] == x ){
//            count++;
           
//         }
//     }
//     cout << count<< endl;
  
    
    
//     return 0;
    
// }















// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
    
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
    
// sort (arr, arr+ n);
// cout << "Sorted : ";
// for (int i=0; i<n; i++){
//     cout << arr[i]<< " ";
// }
// cout << endl;

// cout << "min: " << arr[0]<< endl;
// cout << "max: " << arr[n-1];
    
    
//     return 0;
    
// }




























#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
sort (arr, arr+ n);      // why arr + n because  arr + n = last element address . and first value means arr[0] and last value means arr[n-1] then why arr + n ? because arr + n is the address of the element after the last element.  sort(arr, arr + n) means sort the array from the first element to the last element.  if we write sort(arr, arr + n - 1) then it will sort the array from the first element to the second last element.  if we write sort(arr, arr + n + 1) then it will sort the array from the first element to the element after the last element which is not exist. so we should write sort(arr, arr + n) to sort the whole array.
int k; cin >> k;

cout << "Sorted : ";
for (int i=0; i<n; i++){
    cout << arr[i]<< " ";
}
cout << endl;

cout << "min: " << arr[0]<< endl;
cout << "max: " << arr[n-1] << endl;

cout << "kth min: " << k-1<<  " "<< "value: "<< arr[k-1]<< endl;
cout << "kth max: " << n-k << " " <<"value:" << arr[n-k] << endl;
    
    
    return 0;
    
}