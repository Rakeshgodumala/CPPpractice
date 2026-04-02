// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int x;
//   cout << "Enter a number: " ;
//   // cout << "Enter a number: " << endl;

//   // cout << "Enter a number: " << "\n";
  
// cin >>  x;
// cout << "output is : " << x *3 << endl;


//   return 0;
// }

















// ///*******************data types */

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//  int x = 10;
//  float y = 3.14;
//  string name ="ABC";
//  double Z = 5.567;
//  long w = 82398;
//  long long p = 82378987688986898;

//  // string important
// string str = "Pokiri is my favourite movie";
// cout << str << endl;
 
//  cout << "Integer: " << x << "\n" << "Float:" << y << "\n" << "String: " << name << "\n" << "Double: " << Z << "\n" << "Long: " << w << "\n" << "Long Long: " << p << endl;

//   return 0;
// }














//********************If else statement */






// #include<bits/stdc++.h>
// using namespace std;
// int main(){
 
//   int age;
//   cout << "Enter your age: " ;
//   cin >> age;
//   if(age>=18){
//     cout << "You are an adult." << endl;
  
//   }
//   else if(age>=13 && age<18){
//     cout << "You are a teenager." << endl;
//   }
//   else{
//     cout << "You are not a teenager or an adult." << endl;
//   }
//   return 0;
// }








// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int age;
//   cout << "Enter your age: " ;
//   cin >> age;
//   if(age<18){
//     cout << "Not Eligible for Job";
//   }else if (age<=57){
//     cout << "Eligible for Job";
//     if(age>=55){
//       cout << ", but retirement is near";
//     }
//   }
//   else{
//     cout << "Retired";
//   }
//   return 0;
// }




//***************Switch statement *****************************/




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int x;
//   cout << "Enter a number between 1 to 7: ";
//   cin >> x;
//   switch(x){
//     case 1:
//     cout << "Monday" << endl;
//     break;
//     case 2: 
//     cout << "Tuesday" << "\n";
//     break;

//     case 3: 
//     cout << "Wednesday" << "\n";
//     break;
//     case 4: 
//     cout << "Thursday" << "\n";
//     break;
//     case 5: 
//     cout << "Friday" << "\n";
//     break;

//     case 6: 
//     cout << "Saturday" << "\n";
//     break;
//     case 7: 
//     cout << "Sunday" << "\n";
//     break;

//     default:
//     cout<< "Invalid input! Please enter a number between 1 and 7. " << endl;
//   }

//   return 0;
// }




//////////////////////***************************Array*************************************** */



// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//   int arr[4];

//   cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
  
//   cout << "arr[3]: " << arr[3] << " + 8 = " << arr[3] + 8 << endl;

 

//   return 0;
// }



///***********             2d Array*********** */


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//   int arr[4][5];
//   arr[4][5] = 23;
//   cout << "arr[4][5]: " << arr[4][5] << endl;
 

//   return 0;
// }





///////////***********************STRING */


// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//   string str = "Pokiri";
//   // int len = str.length();

//   int len = str.size();

//   str[len-1]= 'a';

//   // cout << len;
//   cout << str[len-1] << endl;


//   return 0;
// }





//************** for loops */



// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// for(int x =1; x<=5; x = x+1){
//   cout << "ABC" << "\n";
// }
// return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//   int x;
// for(x = 5; x >=0; x = x-1){
//   cout << "ABC" << " "<< x << "\n";
// }

// cout << x << endl;
// return 0;
// }






#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int x;
for(x = 0; x <=30; x = x+10){
  cout << "ABC" << " "<< x << "\n";
}

cout << x << endl;
return 0;
}






// #include <bits/stdc++.h>
// using namespace std;
// int main ()
// {
//   int n, j = 0;
//   cin >> n;
//   int a[n] = { 0 };
//   for (int i = 0; i < n; i++)
//   {
//     cin >> a[j];
//     if (a[j] != 0)
//     {
//         j++;
//     }
//   }
//   for (int i = 0; i < n; i++)
//   {
//       cout << a[i] << " ";
//   }
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main ()
// {
//   int n;
//   cin >> n;
//   int k = (1 << (int) floor (log2 (n)) + 1) - 1;
//   cout << (n ^ k);
// }