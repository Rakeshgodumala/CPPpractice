#include <bits/stdc++.h>
using namespace std;
int main()
{

  int n;
  cout << "Enter the number: "  << "\n";
  cin >> n;

  bool check = 1;

  for (int i = 2; i <= n - 1; i++)
  {
    if (n % i == 0)
    {
      check = false;
      break;
    }
  }

  if (check == true)
  {
    cout << " prime number" << "\n";
  }
  else
  {
    cout << " non prime number" << "\n";
  }

  return 0;
}