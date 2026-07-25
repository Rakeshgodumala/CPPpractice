#include <bits/stdc++.h>
using namespace std;

// void changeValue(int &y){
//   y = 20;
// }




void change(int* ptr){
  *ptr = 101;
}

int main(){

  // int x = 10;
  
  // changeValue(x);




  int x = 50;
  // // int* ptr = &x;

  change(&x);
  
  cout << x;


  return 0;
}