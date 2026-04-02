#include <bits/stdc++.h>
using namespace std;
int main(){

  int n; cin >> n;
  int reversed = 0;
  int sign = 1;

  if (n < 0) {
    sign = -1;
    n = abs(n);
  }

  while (n != 0){
    int dig = n%10;

    reversed = reversed*10 + dig;
    n= n/10;

  }
cout<< sign<<endl;



  return 0;
}