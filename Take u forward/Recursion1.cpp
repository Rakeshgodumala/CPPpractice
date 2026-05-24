#include <bits/stdc++.h>
using namespace std;



// Recursion : when a function call itself until a specified condition is met. 

// void fun(){
//   cout << "Hi";
//   fun();
// }



//   int cnt = 0;
// void f1(){

//   if(cnt == 5) return;
//     cout << cnt << " ";
//   cnt++;
//   f1();

// }



// void f2(int i, int n){
//   if(i>n) return;
//   cout << "Hi " << i  << " time "<< endl;
//   f2(i+1, n);
// }




void f3(int i, int n){
  if(i<1) return;
  cout << "Hi " << i  << " time "<< endl;
  f3(i-1, n);
}

int main(){

  // fun();

  // f1();



  int n;
  cin >> n;

  // f2(1,n);

  f3(n,n);
}