/*
 * @lc app=leetcode id=918 lang=cpp
 *
 * [918] Maximum Sum Circular Subarray
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int kadane(vector<int> nums)
    {
        int res = nums[0];
        int curr = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            curr = max(nums[i], curr + nums[i]);
            res = max(res, curr);
        }
        return res;
    }
    int maxSubarraySumCircular(vector<int> &nums)
    {
        int normalSum = kadane(nums);
        if (normalSum < 0)
        {
            return normalSum;
        }
        int arrsum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            arrsum += nums[i];
            nums[i] = -nums[i];
        }
        int minSum = kadane(nums);
        int circularSum = minSum + arrsum;
        return max(normalSum, circularSum);
    }
};
// @lc code=end
