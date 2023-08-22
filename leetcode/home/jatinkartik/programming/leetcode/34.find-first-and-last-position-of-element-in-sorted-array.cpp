/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int nameOcc(vector<int> &nums, int target, bool cond)
    {
        int ans = -1;
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
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
                if (cond == true)
                {
                    end = mid-1;
                    ans = mid;
                }
                else
                {
                    start = mid + 1;
                    ans = mid;
                }
            }
        }
        return ans;
    }

public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> numb;
        int var1 = -1;
        int var2 = -1;
            
        // if((nums.size()==1)&&(target==nums[0])){
        //     numb.push_back(0);
        //     numb.push_back(0);
        //     return numb; 
        // }
        var2 = nameOcc(nums, target, false);
        var1 = nameOcc(nums, target, true);
        numb.push_back(var1);
        numb.push_back(var2);
        return numb;
    }
};
// @lc code=end
