import javax.lang.model.util.ElementScanner6;

/*
 * @lc app=leetcode id=541 lang=java
 *
 * [541] Reverse String II
 */

// @lc code=start

class Solution {

    public String reverseStr(String s, int k) {
        char sb[] = s.toCharArray();
        for (int i = 0; i < s.length(); i += 2 * k) {
            int front = i;
            int back = Math.min(front + k - 1, s.length() - 1);
            while (front < back) {
                char temp = sb[front];
                sb[front++] = sb[back];
                sb[back--] = temp;
            }
        }
        return new String(sb);
    }
}
// @lc code=end
