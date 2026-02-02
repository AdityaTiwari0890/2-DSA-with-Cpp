// // Capacity To Ship Packages Within D Days
// Difficulty: MediumAccuracy: 50.14%Submissions: 26K+Points: 4Average Time: 25m
// Given an array arr[] of n weights. Find the least weight capacity of a boat to ship all weights within d days.
// The ith weight has a weight of arr[i]. Each day, we load the boat with weights given by arr[i].We may not load more weight than the maximum weight capacity of the ship.

// Note: You have to load weights on the boat in the given order.

 

// Example 1:

// Input:
// n = 3
// arr[] = {1, 2, 1}
// d = 2
// Output:
// 3
// Explanation:
// We can ship the weights in 2 days
// in the following way:-
// Day 1- 1,2
// Day 2- 1
// Example 2:
// Input:
// n = 3
// arr[] = {9, 8, 10}
// d = 3
// Output:
// 10
// Explanation:
// We can ship the weights in 3 days
// in the following way:-
// Day 1- 9
// Day 2- 8
// Day 3- 10
 

// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function leastWeightCapacity() which takes 2 integers n, and d, and an array arr of size n as input and returns the least weight capacity of the boat required.


// Expected Time Complexity: O(n*log(Sum of weights - max(list of weights))
// Expected Auxiliary Space: O(1)


// Constraints:
// 1 ≤ d ≤ n ≤ 105
// 1 ≤ arr[i] ≤ 105