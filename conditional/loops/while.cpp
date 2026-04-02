#include <bits/stdc++.h>

using namespace std;
int main()
{
  // {
  //   int count = 10;
  //   int n=1;
  //   while(count >= n){
  //     cout << count << "\n";
  //     count -= 1;
  //   }

  int oddSum = 0;
  int sum = 0;
  int i = 1;
  int n = 10;

  while (i <= n)
  {
    if (i % 2 != 0)
    {
      cout << i << " " << "\n";
      sum = sum + i;
      oddSum = oddSum + i;
    }

    i = i + 1;
  }
  cout << "sum: " << sum << "\n";
  cout << "oddSum: " << oddSum << "\n\n";

string s1, s2, s3, s4, s5, s6;
cin >> s1>>s2 >> s4 >> s6>> s5 >> s3;
cout << s1 << "\n" << s2 << "\n" << s3 << "\n" << s6 << "\n" << s4<< "\n" << s5;
  return 0;
}