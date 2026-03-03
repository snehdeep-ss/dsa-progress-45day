/*
 * Problem: 560. Subarray Sum Equals K
 * LeetCode: https://leetcode.com/problems/subarray-sum-equals-k/
 * Language: C++
 * Status: Accepted
 * Runtime: 37 ms (beats 78.1%)
 * Memory:  45568000 MB (beats 39.2%)
 * Date:    2026-03-03
 * Submission ID: 1936762492
 *
 * Part of: 45-Day DSA Roadmap (C++ | SDE1/SDE2 India)
 */

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0;
        unordered_map<int, int> mp;
        int currSum = 0;
        mp[0] = 1;
        for (int i = 0; i < nums.size(); i++) {
            currSum += nums[i];

            if (mp.find(currSum - k) != mp.end())
                ans += mp[currSum - k];
            mp[currSum]++;
        }
        return ans;
    }
};