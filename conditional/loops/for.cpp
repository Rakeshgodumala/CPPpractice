#include <bits/stdc++.h>

using namespace std;
int main()
{

  // int sum = 0;
  int n = 10;
  // for (int i = 1; i <= n; i++)
  // {
  //   sum = sum + i;
  //   if(i==10){
  //     break;
  //   }
  // }
  // cout << "sum is " << sum << "\n";

  // for(int i=1; i<=n; i++)
  // cout << i << " ";

  // for(int i=1; i<=n; i=i+i)
  // cout << i << " ";
  int oddSum = 0;
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 0)
    {
       cout << i << "  " << "\n";
      oddSum = oddSum + i;
    }
  }
  cout << "odd Sum: " << oddSum << "\n";

  return 0;
}