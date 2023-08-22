/*
 * @lc app=leetcode id=2760 lang=cpp
 *
 * [2760] Longest Even Odd Subarray With Threshold
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestAlternatingSubarray(vector<int> &nums, int threshold)
    {
        if (nums.size() == 0)
        {
            if ((nums[0] % 2 == 0) && nums[0] <= threshold)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        int currCount, maxCount;
        if (nums[0] % 2 == 0 && nums[0] <= threshold)
        {
            currCount = 1;
        }
        else if(nums[0]%2!=0&&nums[0]<=threshold){
            currCount = 0;
        }
        else{
            currCount = 0;
        }
        for (int i = 1; i < nums.size(); i++)
        {
            // currCount = (nums[i] % 2 == 0);
            for (int k = 2; k < nums.size(); k++)
            {
                if ((nums[k] % 2 != nums[k - 1] % 2) & nums[k - 1] <= threshold)
                {
                    currCount++;
                    maxCount = max(maxCount, currCount);
                }
                else
                {
                    currCount = 0;
                }
            }
            maxCount = max(maxCount, currCount);
        }
        return maxCount;
        // if ((nums.size() == 1))
        // {
        //     // return 1 & (nums[0] <= threshold);
        //     if (nums[0] % 2 == 0&&nums[0]<=threshold)
        //     {
        //         return 1;
        //     }
        //     else
        //     {
        //         return 0;
        //     }
        // }

        // // int curr = (nums[0] % 2 == 0) && (nums[0] <= threshold);
        // int curr = (nums[0] % 2 == 0) && (nums[0] <= threshold);
        // int maxNum = 1;
        // for (int i = 1; i < nums.size(); i++)
        // {
        //     // if ((nums[i] % 2) != (nums[i - 1] % 2) && (nums[i] <= threshold))
        //     if ((nums[i] % 2) != (nums[i - 1] % 2))
        //     {
        //         curr++;
        //     }
        //     else
        //     {
        //         curr = 1;
        //     }
        //     maxNum = max(curr, maxNum);
        // }
        // return maxNum;
    }
};
// @lc code=end
