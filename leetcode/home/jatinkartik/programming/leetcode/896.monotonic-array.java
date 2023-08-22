/*
 * @lc app=leetcode id=896 lang=java
 *
 * [896] Monotonic Array
 */

// @lc code=start
class Solution {
    public boolean isMonotonic(int[] nums) {
        // int length = nums.length;
        int i = 1;
        while (true) {
            if(i==nums.length){
                return true;
            }
            if (nums[0] == nums[i]) {
                i++;
            } else if (nums[0] > nums[i]) {
                while (nums[i-1] >= nums[i]) {
                    i++;
                    if (i == nums.length) {
                        return true;
                    }
                }
                return false;
            } else if (nums[0] < nums[i]) {
                while (nums[i-1] <= nums[i]) {
                    i++;
                    if (i == nums.length) {
                        return true;
                    }
                }
                return false;
            }
        }
    }
}

// @lc code=end
