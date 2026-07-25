// #include <iostream>
// using namespace std;

// int main() {

//     int n = 49;

//     bool prime = true;

//     if(n <= 1)
//         prime = false;

//     for(int i = 2; i * i <= n; i++) {

//         if(n % i == 0) {

//             prime = false;
//             break;
//         }
//     }

//     if(prime)
//         cout << "Prime Number";
//     else
//         cout << "Not Prime Number";

//     return 0;
// }











// Why √n?

// Example:

// n = 49

// Factors:

// 1 × 49
// 7 × 7

// If a factor exists after √49:

// 8,9,10...

// the matching factor would already have appeared before 7.

// So checking beyond √n is unnecessary.

// Dry Run
// n = 49

// Loop:

// i = 2
// 2*2 <= 49 ✓

// i = 3
// 3*3 <= 49 ✓

// i = 4
// 4*4 <= 49 ✓

// i = 5
// 5*5 <= 49 ✓

// i = 6
// 6*6 <= 49 ✓

// i = 7
// 7*7 <= 49 ✓

// Check:

// 49 % 7 = 0

// Factor found.

// Output:

// Not Prime Number
// Complexity
// Time Complexity = O(√n)

// Space Complexity = O(1)
// Interview Answer

// What is a prime number?

// A prime number is a number that has exactly two factors: 1 and itself.

// Best approach?

// Check divisibility from 2 to √n. If any number divides n completely, it is not prime. Otherwise, it is prime.

// Complexity
// Time Complexity = O(√n)
// Space Complexity = O(1)