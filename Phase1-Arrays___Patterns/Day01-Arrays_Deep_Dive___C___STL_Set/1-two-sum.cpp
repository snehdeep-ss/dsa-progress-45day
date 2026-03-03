/*
 * Problem: 1. Two Sum
 * LeetCode: https://leetcode.com/problems/two-sum/
 * Language: C++
 * Status: Accepted
 * Runtime: 0 ms (beats 100.0%)
 * Memory:  14900000 MB (beats 36.0%)
 * Date:    2026-03-02
 * Submission ID: 1935482102
 *
 * Part of: 45-Day DSA Roadmap (C++ | SDE1/SDE2 India)
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int remain = target - nums[i];
            if (mp.find(remain) != mp.end())
                return {mp[remain], i};
            mp[nums[i]] = i;
        }
        return {-1, -1};
    }
};