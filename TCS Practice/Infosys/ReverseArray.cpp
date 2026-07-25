
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n; cin >>n;
//     vector<int> arr(n);
//     for(int i=0;i<n; i++){
//         cin >> arr[i];
//     }
    
//     // reverse an array logic
//     for(int i=n-1; i>=0; i--){
//         cout << arr[i] << " ";
//     }
    


//     // Two pointer approach
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
    
//     int left = 0;
//     int right = n-1;
    
//     while(left<right){
//         swap(arr[left], arr[right]);   // if reverse swap
//         left++;
//         right--;
//     }
    
//     //after swap  big to small print 
//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
  

//     return 0;
// }




//  #include <bits/stdc++.h>
// using namespace std;


// int main(){
// int n; cin >> n;
// int arr[n];
// for(int i=0; i<n; i++){
//     cin >> arr[i];
// }

// reverse(arr, arr+n);
// for(int i=0; i<n; i++){
//     cout << arr[i] << " ";
// }

//     return 0;
// } 




//  #include <bits/stdc++.h>
// using namespace std;

// int main(){


// vector<int> arr = {1, 2, 3, 4, 5};


// reverse(arr.begin(), arr.end());
// for(int i=0; i<arr.size(); i++){
//     cout << arr[i] << " ";
// }

//     return 0;
// } 










//************** */ Reverse a string *************************//


#include <iostream>
#include <stack>
using namespace std;


int main(){
string s = "hello";
stack<char>st;

for(char ch : s){
    st.push(ch);
}
while(!st.empty()){
   cout <<  st.top();
    st.pop();
}

    return 0;
} 




// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// string s;
// getline(cin , s);
// reverse(s.begin(), s.end());
// cout << s;

//     return 0;
// } 





//  #include <bits/stdc++.h>
// using namespace std;


// int main(){
// string s= "Javascript";

// for(int i=s.size()-1; i>=0; i--){
//     cout << s[i];
// }

//     return 0;
// } 





//  #include <bits/stdc++.h>
// using namespace std;


// int main(){
// string s;
// getline(cin , s);

// stack<char> st;
// for(char ch : s){
//     st.push(ch);

// }
// while(!st.empty()){
//     cout << st.top();
//     st.pop();
// }

//     return 0;
// } 

















// #include <iostream>
// #include <vector>
// #include <string>
// #include <utility> // Required for std::swap

// using namespace std;

// int main() {
//     // Vector of strings
//     vector<string> s = {"abc", "pqr", "xyz"};
    
//     int start = 0;
//     int end = s.size() - 1;
    
//     // Two-pointer approach
//     while(start < end) {
//         // Efficiently swaps internal memory pointers, NOT characters
//         swap(s[start], s[end]); 
        
//         start++;
//         end--;
//     }
    
//     // Print the reversed array
//     for(int i = 0; i < s.size(); i++) {
//         cout << s[i] << " ";
//     }
    
//     return 0;
// }





// for(int i=n-1; i>=0; i--){
//     cout << arr[i] << " ";
// }



