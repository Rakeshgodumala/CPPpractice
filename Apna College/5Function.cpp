// #include<bits/stdc++.h>
// using namespace std;


// int Sum (int x , int y){
//   int total = x + y;
//   return total;
// }


// int main(){

//   cout << Sum(5, 10) << endl;

//   return 0;

// }














// #include <bits/stdc++.h>
// using namespace std;


// int Sum(int n){
//   int sum = 0;
//   for(int i=0; i<=n; i++){
//     sum = sum + i;

//   }

//   return sum;
// }

// int main(){
//   int result = Sum(10);
//   cout << " Sum : " << result << endl;

//   int avg = result/10;
//   cout << " Average : " << avg << endl;

//   return 0;
// }






















// factorial


// #include <bits/stdc++.h>
// using namespace std;


// int Fact(int n){
//   int fact = 1;
//   for(int i=1; i<=n; i++){
//     fact *= i;

//   }

//   return fact;
// }

// int main(){
//   int result1 = Fact(10);
//   int result2 = Fact(5);
//   int result3 = Fact(25);

//   cout << " Factorial of 10 : " << result1 << endl;
//   cout << " Factorial of 5 : " << result2 << endl;
//   cout << " Factorial of 25 : " << result3 << endl;




  

//   return 0;
// }























// #include <bits/stdc++.h>
// using namespace std;

// int sum(int a , int b){
//   return a+b;
// }

// int main(){

//   int a = 4 , b = 5;
//   int res = sum(a,b);

//   cout << " sum: " << res;


//   return 0;
// }
















#include <bits/stdc++.h>
using namespace std;

int sumDigit(int num){
    
    int x = 0;
    while(num > 0){
        int res = num%10;
        num = num / 10;
        
        x = x + res;
       
    }
    return x;
    
}

int main(){
    cout << " sum : " << sumDigit(123456789)<< endl;
    
    return 0;
}