/*
 * @lc app=leetcode id=13 lang=java
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
    public int romanToInt(String s) {
        String cop = s;
        int sum = 0;
        int i = 0;
        while(i<s.length()) {
            if(s.indexOf('
            }
            if(s.indexOf('I') ==i){
                sum = sum+1;
                i++;
            }else if(s.indexOf('V')==i){
                sum = sum +5;
                i++;
            }else if(s.indexOf('X')==i){
                sum = sum+10;
                i++;
            }else if(s.indexOf('L')==i){
                sum = sum +50;
                i++;
            }else if(s.indexOf('C')==i){
                sum = sum +100;
                i++;
            }else if(s.indexOf('D')){
                sum = sum =500;
                i++;
            }else if(s.indexOf('M')){
                sum = sum +1000;
            }
        }
    }
}
// @lc code=end
