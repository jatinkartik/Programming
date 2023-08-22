/*
 * @lc app=leetcode id=852 lang=cpp
 *
 * [852] Peak Index in a Mountain Array
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int start = 0;
        int end = arr.size() - 1;
        int n = arr.size();
        int mid = start + (end - start) / 2;
        if (start == end)
        {
            return start;
        }
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if ((mid == 0 || arr[mid] >= arr[mid - 1]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
            {
                return mid;
            }
            if (mid > 0 && arr[mid - 1] > arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid +1;
            }
        }
        return mid;
    }
};
// @lc code=end
