// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int x = 5;
//     int arr[x] = {22,1,3,88, -55};
//     int smallest = INT_MAX;
//     int largest = INT_MIN;

//     for(int i=0; i<x; i++){

//     // smallest = min(arr[i], smallest);
//     // largest = max(arr[i], largest);

//     if(arr[i] < smallest){
//         smallest = arr[i];
//     }

//     if(arr[i] > largest){
//         largest = arr[i];
//     }
//     }

//     cout << "Smallest: " << smallest << endl;
//     cout << "Largest: " << largest;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//   int size = 6;

//   int arr[size];

//   int smallest = INT_MAX;
//   int largest = INT_MIN;

//   char ch;  // ignore commas , spaces etc. input taking in compiler
//   for(int i=0; i<size; i++){
//     cin >> arr[i];
//     cin >> ch;
//   }

//   for (int i=0; i<size; i++){
//     if(arr[i]<smallest){
//       smallest = arr[i];
//     }
//     if(arr[i]>largest){
//       largest = arr[i];
//     }
//   }

//   cout  << " Smallest : " << smallest << "\n" << "Largest: " << largest << endl;

//   return 0;
// }

//*******print the smallest and largest Index  */

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//   int size = 6;

//   int arr[size];

//   int smallest = INT_MAX;
//   int largest = INT_MIN;
//   int smallest_index = -1;
//   int largest_index = -1;

//   char ch;  // ignore commas , spaces etc. input taking in compiler
//   for(int i=0; i<size; i++){
//     cin >> arr[i];
//     cin >> ch;

//   }

//   for (int i=0; i<size; i++){
//     if(arr[i]<smallest){
//       smallest = arr[i];
//       smallest_index = i;
//     }
//     if(arr[i]>largest){
//       largest = arr[i];
//       largest_index = i;
//     }
//   }

//   cout  << " Smallest index: " << smallest_index << "\n" << "Largest index: " << largest_index << endl;

//   return 0;
// }

//  ************Linear Search *********

// #include <bits/stdc++.h>
// using namespace std;

// int linear(int arr[], int size, int target){
//     for (int i=0; i<size; i++){
//         if(arr[i] == target) return i;

//     }
//        return -1;

// }
// int main(){
//     int arr[] = {1,2,3,-4, 9, 8, 10};
//     int size = 7;
//     int target = -4;

//     int result = linear(arr, size, target);
//     cout << "Target index:" << result<< endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int sz)
{
  int start = 0;
  int end = sz - 1;

  while (start <= end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

int main()
{
  int arr[] = {3, 4, 5, 1, 3, 5, 6};
  int sz = 7;

  reverse(arr, sz);
  for (int i = 0; i < sz; i++)
  {
    cout << arr[i] << endl;
  }

  return 0;
}