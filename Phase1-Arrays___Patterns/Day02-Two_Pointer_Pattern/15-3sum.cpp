/*
 * Problem: 15. 3Sum
 * LeetCode: https://leetcode.com/problems/3sum/
 * Language: C++
 * Status: Accepted
 * Runtime: 39 ms (beats 94.9%)
 * Memory:  29504000 MB (beats 28.2%)
 * Date:    2026-03-04
 * Submission ID: 1937332429
 *
 * Part of: 45-Day DSA Roadmap (C++ | SDE1/SDE2 India)
 */

class Solution {

    void helper(int i, vector<int>& nums, vector<vector<int>>& ans) {
        int low = i + 1;
        int high = nums.size() - 1;

        while (low < high) {
            int sum = nums[low] + nums[high] + nums[i];
            if (sum == 0) {
                ans.push_back({nums[i], nums[low], nums[high]});
                low++;
                high--;
                while (low < high && nums[low] == nums[low - 1])
                    low++;
                while (low < high && nums[high] == nums[high + 1])
                    high--;
            } else if (sum < 0)
                low++;
            else
                high--;
        }
    }

public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            // Optional optimization: if nums[i] > 0, break (since array is
            // sorted)
            if (nums[i] > 0)
                break;
            helper(i, nums, ans);
        }
        return ans;
    }
};