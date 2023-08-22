/*
 * @lc app=leetcode id=744 lang=cpp
 *
 * [744] Find Smallest Letter Greater Than Target
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {

        int start = 0;
        int end = letters.size() - 1;
        int mid = start + (end - start) / 2;
        // if (target >= letters[letters.size() - 1])
        // {
        //     return letters[0];
        // }
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (target >= letters[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        // return letters[start];
        return letters[start%letters.size()];
        // for future reference how above line work is so in this question we not included == condition
        // by which if the target element is reach start will still incremented and it will go out of the index
        // so if start in above line less than length of the vector then it will return start if it voilate rule
        // then it must be equal to length of the vector which will return 0  --> that will help in loop around condition
        // not  inculding the exceding length condition
    }
};
// @lc code=end
