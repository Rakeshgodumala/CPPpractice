//// write print a number n times if n=4 then reverse 1 2 3 4

// #include <bits/stdc++.h>
// using namespace std;

// void f(int i, int n){
//     if(i>n){
//         return;
//     }
//     cout << i <<" ";
//     f(i+1, n);
// }

// int main(){
    
//     int n= 4;
//     f(1 , n);
    
//     return 0;
// }




// //// reverse a number n times if n=3 then reverse 321


// #include <bits/stdc++.h>
// using namespace std;


// void fun(int i, int n){
//     if(i<1){
//         return;
//     }
//     cout << i;
//     fun(i-1, n);
// }

// int main(){
//     int n = 3;
//     fun(n,n);
    
//     return 0;
// }










//// print a number n times if n=3 then 1 2 3  without using i+1 or  using  backtracking


// #include <bits/stdc++.h>
// using namespace std;

// void fun(int i, int n){
//     if(i<1) return ;
    
//       fun(i-1, n);   // now here used backtrack . it will call fun again and agiain eg:  store 12345 first , and  not print until get base true  then if went back that concept called backtracking
      
//     cout << i ;
  
// }
// int main(){

// int n = 5;
// fun(n , n);
//     return 0;
// }



