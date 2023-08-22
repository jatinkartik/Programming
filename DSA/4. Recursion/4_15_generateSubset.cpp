#include <bits/stdc++.h>
using namespace std;
void generateSubset(string str, string curr = "", int index = 0)
{
    if (index > (str.length()))
    {
        return;
    }
    cout << endl
         << "level " << index << " elements printing    : -   " << curr;
    // generateSubset(str,curr+str[index],index+1);
    generateSubset(str, curr, index + 1);
    generateSubset(str, curr + str[index], index + 1);
}
int main()
{
    generateSubset("abc");
    cout << endl;
    return 0;
}

// output:
//
// a
// ab
// abc
// ac
// b
// bc
// c
//
// time complexity: O(2^n)
