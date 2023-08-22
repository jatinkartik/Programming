/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        int low = 1;
        int high = x;
        int mid = low +(high-low)/2;
        while (low<=high)
        {
            if(x/mid>mid){
                low = mid+1;
            } else if(x/mid<mid){
                high = mid -1;
            }else{
                return mid;
            }
            mid = low + (high-low)/2;
        }
        return mid-1;
    }
};
// @lc code=end

