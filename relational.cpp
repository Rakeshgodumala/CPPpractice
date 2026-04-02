#include <iostream>
using namespace std;
int main()
{
  // int x = 40, y = 50;

  // // Realational Operator
  //  cout << "The value is " << (x < y) << "\n";
  //  cout << "The value is " << (x > y) << "\n";
  //  cout << "The value is " << (x <= y) << "\n";
  //  cout << "The value is " << (x >= y) << "\n";
  //  cout << "The value is " << (x == y) << "\n";
  //  cout << "The value is " << !(x > y) << "\n";
  //  cout << "The value is " << (x != y) << "\n";
  // cout << "Hi, How are you?" << "\n"
  //      << "Pokiri" << "\n";

  // Logical operators

  // cout << !(3 > 4); // logical not

  // cout << ((2 > 1) && (3 < 2)) << "\n"; // true and false = false ie: 0  //Logical And
  // cout << ((2 > 1) && (3 < 4)) << "\n"; // //true and true = true ie: 1   //Logical And

  // cout << ((2 > 1) || (3 < 2)) << "\n"; // true and false = true ie: 1  //Logical OR
  // cout << ((2 > 1) || (3 < 4)) << "\n"; // //true and true = true ie: 1   //Logical OR
  // cout << ((2 < 1) || (3 > 4)) << "\n"; // //false and false = false ie: 0   //Logical OR

  int x, y;
  cout << "Enter the value of x: " << "\n";
  cin >> x;
  cout << "Enter the value of y: " << "\n";
  cin >> y;
  cout << "multiplication of both the value of X & Y: " << (x * y) << "\n" ;
   cout << "Addition of both the value of X & Y: " << (x + y);
  return 0;
}
