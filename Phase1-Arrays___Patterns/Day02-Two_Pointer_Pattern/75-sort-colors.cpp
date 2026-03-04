/*
 * Problem: 75. Sort Colors (Dutch Flag)
 * LeetCode: https://leetcode.com/problems/sort-colors/
 * Language: C++
 * Status: Accepted
 * Runtime: 0 ms (beats 100.0%)
 * Memory:  11696000 MB (beats 48.2%)
 * Date:    2026-03-04
 * Submission ID: 1937320103
 *
 * Part of: 45-Day DSA Roadmap (C++ | SDE1/SDE2 India)
 */

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};