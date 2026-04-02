
// #include <bits/stdc++.h>
// using namespace std;
 
// int main(){
// int num;
// cout << "enter a num:";
// cin >> num;
 
// if(num%2==0){
//   cout << "Even Number: " << num << "\n";
// }
// else{
//   cout << "Odd Number: " << num << "\n";
// }


// return 0;
// }






// #include <bits/stdc++.h>
// using namespace std;
 
// // print even and odd num between 1 to 50 separtely even numbers separtely list  and odd numbers separtely list in simple 

// int main(){
//   vector<int> evenNumbers;
//   vector<int> oddNumbers;

//   for(int i = 1; i <= 50; i++){
//     if(i % 2 == 0){
//       evenNumbers.push_back(i);
//     }
//     else{
//       oddNumbers.push_back(i);
//     }
//   }

//   cout << "Even Numbers between 1 and 50: ";
//   for(int num : evenNumbers){
//     cout << num << " ";
//   }
//   cout << "\n";

//   cout << "Odd Numbers between 1 and 50: ";
//   for(int num : oddNumbers){
//     cout << num << " ";
//   }
//   cout << "\n";

//  return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// int main(){

//   int t;
//   while(t++){
//     int a , b;
//     cin >> a >> b;
//     cout << a + b << "\n";
//   }

//   return 0;
// }









// sorting an array of 0s, 1s and 2s in linear time complexity and constant space complexity

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   int n;
//   cin >> n;

//   int arr[n];
//   int count0 = 0, count1 = 0,count2=0;
//   for(int i=0; i<n; i++){
//     cin >> arr[i];
//     if(arr[i] == 0){
//       count0++;
//     } else if(arr[i] == 1){
//       count1++;
//     }else{
//       count2 ++;
//     }
//     }


//     for (int i=0; i< count0; i++){
//       cout << 0 << " ";
//     }

//     for (int i=0; i<count1; i++){
//       cout << 1 << " ";
//     }

//     for (int i=0; i<count2; i++){
//       cout << 2 << " ";
//     }

//     return 0;
  
//   }

























// moves all the zeroes to the end of the array while maintaining the relative order of the non-zero elements.


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   int n;
//   cin >> n;

//   int arr[n];
//   for (int i= 0; i< n; i++){
//     cin>> arr[i];
//   }
//   int j = 0;
//   for (int i = 0; i<n; i++){
//     if(arr[i] != 0){
//       swap(arr[i], arr[j]);
//       j++;
//     }
//   }

//   for (int i = 0; i<n; i++){
//     cout << arr[i] << " ";
//   }

//     return 0;
  
//   }






// #include <bits/stdc++.h>
// using namespace std;
//  int main(){

//   int n;
//   cin >> n;

//   cout << "Enter a Number" << "\n";

//   //find average and sum
//   int sum = 0;
//   for( int i = 0; i<=n; i++){
//     sum += i;

//   }
//   double average = sum/(n+1);

//   cout << "Sum: " << sum << " and average :" << average << endl;


//   return 0;
//  }












// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n = 3;
    
//     for(int i=0; i<n; i++){
//         char ch = 'A';
//         for(int j=0; i<n; j++){
//             cout << ch ;
//             ch = ch + 1;
//         }
//         cout << endl;
//     }
    
//     return 0;
// }










// #include <iostream>
// using namespace std;

// bool isValid(string s) {
//     int upper = 0, lower = 0;

//     for (char c : s) {
//         if (isupper(c)) upper++;
//         else lower++;
//     }


//     if (upper == s.length()) return true;

 
//     if (lower == s.length()) return true;

//     if (isupper(s[0]) && lower == s.length() - 1) return true;

//     return false;
// }

// int main() {
//     string s;
//     cin >> s;

//     if (isValid(s))
//         cout << "true";
//     else
//         cout << "false";

//     return 0;
// }








#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 0;
  int months;
  cin >> months;

  if(months <= n){
    cout << "Invalid Input" << endl;
  } else if(months == 1){
    cout << "Cost: 2000" << endl;
  }else if(months >=2 && months <=3 ){
    cout << "Cost: 5000" << endl;
  }
    else if(months >=4 && months <=6){
    cout << "Cost: 9000" << endl;
    }
    else{
    cout << "Cost: 15000" << endl;
    } 


  




    return 0;

}





