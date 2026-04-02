#include <iostream> // This library is needed for input and output
using namespace std;
int main()
{
  // Declare two integer variables
  int a, b;

  // Ask the user to enter two numbers
  cout << "Enter two numbers: ";
  cin >> a >> b; // Take input from the user

  // Display the numbers before swapping
  cout << "Before swapping: a = " << a << " and  b = " << b << endl;

  // Create a temporary variable to help swap the values
  int x; // Declare a temporary variable
  x = a; // Store the value of 'a' in 'temp'
  a = b; // Assign the value of 'b' to 'a'
  b = x; // Assign the value stored in 'temp' to 'b'

  // Display the numbers after swapping
  cout << "After swapping: a = " << a << " and b = " << b << endl;

  return 0; // End of the program
}
