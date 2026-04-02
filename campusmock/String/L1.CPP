// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   string str;
//   getline(cin, str);
//   // cout << str << endl;

//   // for(int i=0; i<str.size(); i++){
//   //   cout << str[i];
//   // }



//   // for (int i = 0; str[i]!= '\0'; i++){
//   //   if (str[i] == ' '){
//   //     cout << "Space " << endl;
//   //     return 0;
//   //   }
//   //   // else{
//   //   //   cout << "not space"<< endl;
//   //   // }
//   // }

//   // cout << "No space found in the string."<< endl;

//   // cout << str.size() << endl;                    // size of string str. it will count the number of characters in the string including spaces.





//   /// to sort string

//   // sort(str.begin(), str.end());
//   // cout << str << endl;


//   //  to reverse a string

//   // reverse(str.begin(), str.end());
//   // cout << str << endl;










//   // ***************check if a string is palindrome or not************

// //   string abc = str;
// //       reverse(abc.begin(), abc.end());
// //   if(abc == str){

// //     cout << "Palindrome" << endl;
// //   }
// //   else{
// //     cout << "Not Palindrome" << endl;
// //   }





















//   return 0;
// }


// *************8CHECK PALINDRONE OR NOT*******
 

#include <bits/stdc++.h>
using namespace std;

int countWord(string str){
    int count = 0;
   for(int i=0; i<str.size(); i++){
       if(str[i] == ' '){
           count++;
       }
   }
   return count+1;
    
}
int main(){
    
    string str;
    getline(cin , str);
    
    cout << countWord(str);
    
    return 0;
}