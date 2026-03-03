/*
 * Problem: 53. Max Subarray (Kadane's)
 * LeetCode: https://leetcode.com/problems/maximum-subarray/
 * Language: C++
 * Status: Accepted
 * Runtime: 0 ms (beats 100.0%)
 * Memory:  71592000 MB (beats 97.8%)
 * Date:    2026-03-03
 * Submission ID: 1936738320
 *
 * Part of: 45-Day DSA Roadmap (C++ | SDE1/SDE2 India)
 */

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int currSum = nums[0];
        int maxSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currSum = max(currSum + nums[i], nums[i]);
            maxSum = max(currSum, maxSum);
        }

        return maxSum;
    }
};