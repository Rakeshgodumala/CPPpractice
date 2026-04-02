// // muliplication of subset array


// #include <bits/stdc++.h>  
// using namespace std;

// // Function to calculate maximum product subset
// long long maxProductSubset(int arr[], int n) {
//     if (n == 1) return arr[0];  // Only one element, return it directly

//     long long product = 1;
//     int countNeg = 0, countZero = 0;
//     int maxNeg = INT_MIN; // Track the largest negative (closest to zero)

//     // Traverse array
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == 0) {
//             countZero++;
//             continue; // Skip zeros
//         }
//         if (arr[i] < 0) {
//             countNeg++;
//             maxNeg = max(maxNeg, arr[i]); // Track largest negative
//         }
//         product *= arr[i]; // Multiply non-zero elements
//     }

//     // Case 1: All elements are zero
//     if (countZero == n) return 0;

//     // Case 2: Odd number of negatives → remove one negative
//     if (countNeg % 2 != 0) {
//         // Special case: only one negative and rest are zeros
//         if (countNeg == 1 && countZero == n-1) {
//             return 0;
//         }
//         product /= maxNeg; // Divide by the largest negative
//     }

//     return product;
// }

// int main() {
//     int n;
//     cin >> n; // Input size of array
//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i]; // Input array elements
//     }

//     cout << maxProductSubset(arr, n);
//     return 0;
// }





















#include <iostream>
using namespace std
int main() {

    int arr[] = {10, 15, 20, 25, 30};
    int n = 5;

    // Step 2: Initialize variables
    int count = 0;   // number of odd elements
    int sum = 0;     // sum of odd elements

    // Step 3: Traverse array
    for(int i = 0; i < n; i++) {

        // Step 4: Check if number is odd
        if(arr[i] % 2 != 0) {

            // Example:
            // arr[i] = 15 → 15 % 2 != 0 → TRUE

            sum = sum + arr[i];   // sum = 0 + 15 = 15
            count++;              // count = 1

            // next odd = 25
            // sum = 15 + 25 = 40
            // count = 2
        }
    }

    // Step 5: Calculate average safely
    double avg = 0;

    if(count > 0) {
        avg = (double)sum / count;   // 40 / 2 = 20
    }

    // Step 6: Output
    cout << "Count = " << count << endl;   // 2
    cout << "Sum = " << sum << endl;       // 40
    cout << "Average = " << avg << endl;   // 20

    return 0;
}
