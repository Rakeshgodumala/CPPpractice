// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     // 1. Initialize the input array and rotation steps
//     vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
//     int k = 3;
//     int n = nums.size();

//     // 2. Handle cases where k is larger than the array length
//     k = k % n;

//     // 3. Perform the 3-step reversal algorithm in place
//     // Step A: Reverse the entire array
//     reverse(nums.begin(), nums.end());

//     // Step B: Reverse the first k elements
//     reverse(nums.begin(), nums.begin() + k);

//     // Step C: Reverse the remaining elements
//     reverse(nums.begin() + k, nums.end());

//     // 4. Print the final rotated array to the console
//     for (int num : nums) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }




// // Time complexity = O(n) due to the three reversals, each taking O(n) time.


// ////////////// Leetcode 189 Rotate Array ///////////////

// // 189. Rotate Array

// // Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 

// // Example 1:

// // Input: nums = [1,2,3,4,5,6,7], k = 3
// // Output: [5,6,7,1,2,3,4]
// // Explanation:
// // rotate 1 steps to the right: [7,1,2,3,4,5,6]
// // rotate 2 steps to the right: [6,7,1,2,3,4,5]
// // rotate 3 steps to the right: [5,6,7,1,2,3,4]
// // Example 2:

// // Input: nums = [-1,-100,3,99], k = 2
// // Output: [3,99,-1,-100]
// // Explanation: 
// // rotate 1 steps to the right: [99,-1,-100,3]
// // rotate 2 steps to the right: [3,99,-1,-100]
 

// // Constraints:

// // 1 <= nums.length <= 105
// // -231 <= nums[i] <= 231 - 1
// // 0 <= k <= 105


// ////// Solution ***************************************************



// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
        
//         // Handle cases where k is greater than the array size
//         k = k % n;
         
//         // Step 1: Reverse the entire array
//         reverse(nums.begin(), nums.end());
        
//         // Step 2: Reverse the first k elements
//         reverse(nums.begin(), nums.begin() + k);
        
//         // Step 3: Reverse the remaining n - k elements
//         reverse(nums.begin() + k, nums.end());
//     }
// };
