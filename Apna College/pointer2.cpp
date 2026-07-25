#include <bits/stdc++.h>
using namespace std;


int main(){

  // int x = 10;

  // int *y = &x;

  // cout << *y << endl;
  // cout << y << endl;
  // cout << &x << endl;














  int a = 20;
  int* ptr = &a;
   int** parptr = &ptr;

   cout << ptr << endl;
    cout << *ptr << endl;
    cout << parptr << endl;
cout << &a << endl;
cout << *(&a) << endl;
cout << *parptr << endl;

  return 0;
}