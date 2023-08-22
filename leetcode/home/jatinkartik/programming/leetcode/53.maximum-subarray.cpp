/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{

public:
    int maxSubArray(vector<int> &nums)
    {

        int n = nums.size();
        int maxSum = nums[0];
        int curr = 0;
        for (int i = 0; i < n; i++)
        {
            curr += nums[i];
            maxSum = max(maxSum, max(nums[i], curr));
            if (curr <= nums[i])
            {
                curr = nums[i];
            }
        }
        return maxSum;
    }
};
// @lc code=end
