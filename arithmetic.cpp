#include <iostream>
using namespace std;
int main()
{
  int x = 5, y = 2;

  // int sum = x + y;
  // int sub = x - y;

  // cout << sum << "\n";
  // cout << sub << "\n";

  cout << "sum = " << (x + y) << "\n";
  cout << "sub = " << (x - y) << "\n";
  cout << "mul = " << (x * y) << "\n";
  cout << "divide = " << (x / (double)y) << "\n"; // 2  not 2.5  after decimal it will take overall
  // cout << "mod = " << (x % y) << "\n";

  return 0;
}