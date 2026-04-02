// // second minimum and second maximum in an array

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for (int i=0; i<n; i++){
//     cin >> arr[i];

//   }

//   //dont use sort 
//   int min= INT_MAX;
//   int max= INT_MIN;

// for (int i=0; i<n; i++){
//   if(arr[i] <min){
//     min = arr[i];
//   }
//   if(arr[i] > max){
//     max = arr[i];
//   }
// }

// cout << "min: " << min << endl;
// cout << "max: " << max << endl;


// }






// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for (int i=0; i<n; i++){
//     cin >> arr[i];
//   }

//   int target;
//   cin>>target;
//   for (int i=0; i<n; i++){
//     for (int j=i+1; j<n; j++){
//       if(arr[i]+arr[j] == target){

//         cout <<"Indices: " << i <<  " " << j << "values: " << arr[i] << " " << arr[j] << endl;
        
//       }
//     }
//   }

// }






// //********union and intersection */
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//   int n1, n2;
//   cin >> n1 >> n2;
//   int arr1[n1], arr2[n2];

//   for (int i = 0; i < n1; i++) {
//     cin >> arr1[i];
//   }
//   for (int i = 0; i < n2; i++) {
//     cin >> arr2[i];
//   }

//   //union
//   set<int> s;
//   for (int i = 0; i < n1; i++) {
//     s.insert(arr1[i]);
//   }
//   for (int i = 0; i < n2; i++) {
//     s.insert(arr2[i]);
//   }
//   cout << "Union: ";
//   for (int it : s) {
//     cout << it << " ";
//   }
//   cout << endl;



//   //Intersection
//   set<int> intersection;
//   for (int i = 0; i < n1; i++) {
//     if (s.find(arr1[i]) != s.end()) {
//       intersection.insert(arr1[i]);
//     }
//   }
//   cout << "Intersection: ";
//   for (int it : intersection) {
//     cout << it << " ";
//   }
//   cout << endl;

//   return 0;
// }





















// Method 2 union and intersection 






//********union and intersection */
#include <bits/stdc++.h>
using namespace std;

int main(){
 int n1;
 cin >> n1;
 int arr1[n1];
 for(int i=0; i<n1; i++){
  cin >> arr1[i];
 }

  int n2;
 cin >> n2;
 int arr2[n2];
 for(int i=0; i<n2; i++){
  cin >> arr2[i];
 }


 //union

 for (int i=0; i<n1; i++){
  cout << arr1[i] << " ";
 }
 for (int i=0; i<n2; i++){
  bool present = false;
  for (int j=0; j<n1; j++){
    if(arr2[i] == arr1[j]){
      present = true;
      break;
    }
  }
  if(present ==false){
    cout << arr2[i] << " ";
  }

 }
  cout << endl;

  return 0;
}