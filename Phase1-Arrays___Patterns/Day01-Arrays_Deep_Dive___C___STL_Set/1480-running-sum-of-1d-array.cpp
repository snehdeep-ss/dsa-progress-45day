/*
 * Problem: 1480. Running Sum of 1D Array
 * LeetCode: https://leetcode.com/problems/running-sum-of-1d-array/
 * Language: C++
 * Status: Accepted
 * Runtime: 0 ms (beats 100.0%)
 * Memory:  12480000 MB (beats 81.5%)
 * Date:    2026-03-03
 * Submission ID: 1936743370
 *
 * Part of: 45-Day DSA Roadmap (C++ | SDE1/SDE2 India)
 */

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        ans.resize(nums.size());
        int currSum = 0;
        for(int i = 0; i < nums.size(); i++) {
            currSum += nums[i];
            ans[i] = currSum;
        }

        return ans;
    }
};