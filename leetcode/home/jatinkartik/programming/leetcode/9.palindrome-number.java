/*
 * @lc app=leetcode id=9 lang=java
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
    public boolean isPalindrome(int x) {
       int temp =x;
       int storevalue =0;
       while (x>0) {
        storevalue = storevalue*10 + x%10;
        x = x/10;
       }
       if (storevalue == temp) {
        return true;
       }else{
        return false;
       }
    }
}
// @lc code=end

