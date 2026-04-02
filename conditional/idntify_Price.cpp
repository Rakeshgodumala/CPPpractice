#include <bits/stdc++.h>
using namespace std;

int main()
{
  // int cp;
  // cout << "Enter Cost price " << "\n";
  // cin >> cp;

  // int sp;
  // cout << "Enter selling price " << "\n";
  // cin >> sp;

  // if(sp>cp){
  //   cout << "The Profit is " << sp-cp;
  // }
  // else if(sp<cp) {
  //   cout << "The Loss is " << cp-sp;
  // } else{
  //   cout << "No Profit or loss";
  // }

  int l, b;
  cout << "the length is " << "\n";
  cin >> l;
  cout << "the bredth is " << "\n";
  cin >> b;
  int area = l * b;
  int perimeter = 2 * (l + b);
  cout << "The area of Rectangle is " << area << "\n";
  cout << " The perimeter of Rectangle is " << perimeter << "\n";
  if (area > perimeter)
  {

    cout << "The area of rectangle is greater than it's perimeter: " << area << "\n";
  }
  else if (area < perimeter)
  {
    cout << "The area of rectangle is less than it's perimeter: " << perimeter << "\n";
  }

  else
  {
    cout << "The area of rectangle is equal than it's perimeter.";
  }
  return 0;
}
