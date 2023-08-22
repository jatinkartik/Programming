#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n * fact(n - 1);
}

int trailingCount(int n, int tr)
{
    if (tr > n)
    {
        return 0;
    }
    return n / tr + trailingCount(n, tr * 5);
}
// int trailigCount2(int n)
// {
//     int res = 0;
//     for (int i = 5; i < n; i = i * 5)
//     {
//         res = res + n / i;
//     }
//     return res;
// }
int main()
{

    unsigned long long int result = fact(10);
    cout << result << endl;
    int res = trailingCount(100, 5);
    cout << res << endl;
    // res = trailigCount2(1000);
    // cout << res << endl;

    cout << endl;
    return 0;
}

// time complexity is O(logn)
// space complexity is O(1)
// auxilary space complexity is O(1)
// auxilary space complexity of main is O(1)


// company tags for this question
