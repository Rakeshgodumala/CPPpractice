// // // Longest Substring without Repeating Characters
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     string s;
//     cin >> s;

//     unordered_set<char> st;

//     int left = 0;

//     int maxLen = 0;

//     // right pointer expands window
//     for(int right = 0; right < s.size(); right++){

//         // duplicate found
//         while(st.count(s[right])){

//             // remove left character
//             st.erase(s[left]);

//             left++;
//         }

//         // add current character
//         st.insert(s[right]);

//         // window length
//         int len = right - left + 1;

//         maxLen = max(maxLen, len);
//     }

//     cout << maxLen;

//     return 0;
// }


// // //output  if string is : abaabad  then output is 3 abd, bad in this string not repeating sub string. 



















#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin , s);
    
    int left = 0;
    int maxlen = 0;
    int startIdx = 0; // Tracks the start of the longest substring
 
    unordered_set<char> st;
 
    for(int right=0; right < s.size(); right++){
        while(st.count(s[right])){
            st.erase(s[left]);
            left++;
        }
        st.insert(s[right]);
     
        int len = right - left + 1;
        
        // Keeps your exact required format
        maxlen = max(maxlen, len); 
        
        // If the current window matches the updated maxlen, record its start
        if (len == maxlen) {
            startIdx = left;
        }
    }
 
    // Extract the longest substring
    string result = s.substr(startIdx, maxlen);
 
    cout << maxlen << "  " << result << endl;
    
    return 0;
}

















// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     getline(cin, s);
    
//     int left = 0;
//     int maxlen = 0;
//     int startIdx = 0; // To store the beginning of the best substring
    
//     unordered_set<char> st;
    
//     for (int right = 0; right < s.size(); right++) {
//         while (st.count(s[right])) {
//             st.erase(s[left]);
//             left++;
//         }
//         st.insert(s[right]);
        
//         int len = right - left + 1;
//         if (len > maxlen) {
//             maxlen = len;
//             startIdx = left; // Update start position when a new max is found
//         }
//     }
    
//     // Extract the substring using the start index and max length
//     string result = s.substr(startIdx, maxlen);
    
//     cout << "Length: " << maxlen << endl;
//     cout << "Substring: " << result << endl;
    
//     return 0;
// }












// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     string s;

//     cin >> s;

//     /*
//     unordered_set stores unique characters

//     used to check duplicate quickly

//     example:
//     a b c
//     */

//     unordered_set<char> st;

//     /*
//     left pointer
//     window starting index
//     */

//     int left = 0;

//     /*
//     store final maximum length
//     */

//     int maxLen = 0;

//     /*
//     right pointer expands window

//     right moves one by one
//     */

//     for(int right = 0; right < s.size(); right++){

//         /*
//         duplicate character found ?

//         st.count(character)

//         returns:
//         1 -> exists
//         0 -> not exists
//         */

//         while(st.count(s[right])){

//             /*
//             remove left character

//             because duplicate exists
//             */

//             st.erase(s[left]);

//             /*
//             move left pointer

//             shrink window
//             */

//             left++;
//         }

//         /*
//         now no duplicate exists

//         add current character
//         */

//         st.insert(s[right]);

//         /*
//         calculate current window length

//         formula:

//         right - left + 1
//         */

//         int len = right - left + 1;

//         /*
//         store maximum length
//         */

//         maxLen = max(maxLen, len);
//     }

//     cout << maxLen;

//     return 0;
// }


























///  dry run 

//  NOW DRY RUN VERY SLOWLY

// Input:

// abaabad
// Initially
// left = 0
// maxLen = 0
// set = {}
// right = 0

// Character:

// a

// Check:

// st.count('a')

// returns:

// 0

// No duplicate.

// Insert:

// set = {a}

// Length:

// 0 - 0 + 1 = 1

// Update:

// maxLen = 1
// right = 1

// Character:

// b

// Check duplicate:

// st.count('b') = 0

// Insert:

// {a,b}

// Length:

// 1 - 0 + 1 = 2

// Update:

// maxLen = 2

// Current substring:

// ab
// right = 2

// Character:

// a

// Check:

// st.count('a') = 1

// Duplicate found ❌

// WHY while LOOP?

// Because duplicate exists.

// Need remove characters from left side until duplicate removed.

// First while iteration

// Remove:

// s[left]

// Currently:

// left = 0
// s[0] = a

// Erase:

// remove a

// Set becomes:

// {b}

// Move left:

// left = 1

// Now duplicate removed.

// Insert current a

// Set:

// {b,a}

// Length:

// 2 - 1 + 1 = 2

// Substring:

// ba

// maxLen still:

// 2
// right = 3

// Character:

// a

// Duplicate again.

// while loop

// Remove:

// s[left]

// Currently:

// left = 1
// s[1] = b

// Set:

// {a}

// Still duplicate exists because another a already present.

// while loop runs again.

// Second while iteration

// Remove:

// s[2] = a

// Set:

// {}

// Move:

// left = 3

// Now insert current a.

// Set:

// {a}

// Length:

// 3 - 3 + 1 = 1
// Continue

// Finally longest substring becomes:

// bad

// Length:

// 3
// MOST IMPORTANT UNDERSTANDING
// This Line
// while(st.count(s[right]))

// means:

// duplicate found ?
// This Line
// st.erase(s[left])

// means:

// remove left character
// This Line
// left++

// means:

// shrink window from left
// This Line
// st.insert(s[right])

// means:

// add current character
// This Line
// right - left + 1

// means:

// current substring length