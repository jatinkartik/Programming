/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start) / 2;
        while (start <= end)
        // when you solving the binary search question dont forget to try start <= end condition
        // your whole code may be right but this may be the reason to break your code 
        {
            mid = start + (end - start) / 2;
            if (target > nums[mid])
            {
                start = mid + 1;
            }
            else if (target < nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                return mid;
            }
        }
        return start;
    }
};
// @lc code=end
