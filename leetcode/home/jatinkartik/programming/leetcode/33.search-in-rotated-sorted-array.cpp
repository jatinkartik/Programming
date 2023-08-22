/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start) / 2;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (target == nums[mid])
            {
                return mid;
            }
            else if (target > nums[mid])
            {
                if (nums[mid] > nums[start])
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid-1;
                }
            }
            else
            {
                if (nums[mid] < nums[end])
                {
                    end = mid;
                }
                else
                {
                    start = mid + 1;
                }
            }
        }
        return -1;
    }
};
// @lc code=end
