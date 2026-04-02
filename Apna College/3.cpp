#include <bits/stdc++.h>
using namespace std;

int main()
{

  // int num;
  // cin >> num;
  // cout << (num%2==0 ? "Even Number" : "Odd Number" ) << endl;

  //// *******************While//////////////

  // int count = 0;
  // int n = 20;
  // while(count <= n){
  //   cout << count << " ";
  //   count ++;
  // }

  //////////////////// ****************** for loops

  // int n = 1;
  // for(int i=n; i<=20; i= i+2){
  //   cout << i << " ";
  // }

  // sum of number from 1 to n

  // int n = 12;
  // int sum = 0;
  // for(int i=1; i<=n; i++){
  //   sum = sum + i;

  //   if(i == 10){
  //     break;
  //   }
  // }
  // cout << "Sum of numbers from 1 to " << n << " is: " << sum << endl;

  // Sum of all Odd numbers from 1 to n ********************

  // int N  = 10;
  // int oddSum = 0;

  // for (int i=1; i<=N; i++){
  // //  oddSum = oddSum  + (i%2 !=0 ? i : 0);

  //   if(i%2 != 0){
  //     oddSum += i;

  //   }

  //   if(i == 8){
  //     break;
  //   }
  // }
  // cout<< oddSum << endl;

  // ************************************do while loop*******************************************//

  // int n = 10;
  // int x = 1;

  // do{
  //   cout << x <<  " ";
  //   x++;
  // }while (x<= n);
  // // cout << endl;

  // Check Prime or not******************

  // int n;
  // bool isPrime = true;
  // cout << "Enter a number: ";
  // cin >> n;

  // //   for (int i=2; i<=n/2; i++)

  // // for (int i = 2; i < n - 1; i++)

  // //// for (int i = 2; i * i <= n; i++)

  // // eg: 25  factor 1 x 25, 5 x 5, 25x1  here 1 and 25 are factor but 5 is repeated so we can check till sqrt(n) only  1 x root(n) ie: root n x root(n) = n   that why we can check till sqrt(n) only. eg2: 12  factor 1 x 12, 2 x 6, 3 x 4, 4 x 3, 6 x 2, 12 x 1 here we can check till sqrt(12) . 1 + root(n) ie: 1 + root(12) = 1 + 3.4  we need to check upto 3 only remaining are repeated factor.  here 3 x4 or 4 x 3 . so we nned to check starting 3 only not all . that why we used i * i < = n or i <= sqrt(n) only.

  // for (int i = 2; i <= sqrt(n); i++)
  // {
  //   if (n % i == 0)
  //   {
  //     isPrime = false;
  //     break;
  //   }
  // }

  // if (isPrime == true)
  // {
  //   cout << n << " is a prime number." << endl;
  // }
  // else
  // {
  //   cout << n << " is not a prime number." << endl;
  // }

  //********************** */ Nested Loops************
  //

  //   for (int i = 1; i<= 5; i++)
  // {
  //     cout << "******" << "\n";    // see carefuly used "\n" new lines thats why we get 5 lines of stars.
  //   }
  //   cout << endl;






  // int x = 5;

  //   for (int i = 1; i<= x; i++){
  //     cout << "p";
  //   }
  //   cout << endl;








  

int n = 5;
  for (int i = 1; i <= n; i++)
  {


    int j = 3;
    for (int i = 1; i <= j; i++)
    {
      cout << "W";
    }


    cout << endl;
  }
  


  return 0;
}