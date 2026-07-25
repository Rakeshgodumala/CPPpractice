// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     string s = "Raju is good boy";

//     string word = "";

//     for(int i = 0; i <= s.size(); i++) {

//         // Word completed
//         if(i == s.size() || s[i] == ' ') {

//             reverse(word.begin(), word.end());

//             cout << word << " ";

//             word = ""; // Reset for next word
//         }
//         else {

//             word += s[i];
//         }
//     }

//     return 0;
// }






// Dry Run

// Input: Raju is good boy

// Step 1:

// | i | Character | word | 
// | - | --------- | ---- |
// | 0 | R         | R    |
// | 1 | a         | Ra   |
// | 2 | j         | Raj  |
// | 3 | u         | Raju |



// reverse(word.begin(), word.end());

// Before: Raju

// After: ujaR

// Output:
// ujaR


// Reset:
// word = ""


// Step 2

// | i | Character | word |
// | - | --------- | ---- |
// | 5 | i         | i    |
// | 6 | s         | is   |

// Reverse
// is  to si

// Output:

// ujaR si


// Step 3
// good

// ↓

// doog

// Output:

// ujaR si doog
// Step 4
// boy

// ↓

// yob

// Output:

// ujaR si doog yob


// Time Complexity

// Loop:

// O(n)

// Reverse all words together:

// O(n)

// Total:

// O(n)

// Space:

// O(word length)







