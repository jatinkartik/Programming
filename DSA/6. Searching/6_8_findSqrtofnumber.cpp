#include <bits/stdc++.h>
using namespace std;
int sqrtfn(int x)
{
    int start = 0;
    int end = x;
    int mid;
    // int ans; // easily understandable approach
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid * mid > x)
        {
            end = mid - 1;
        }
        else if (mid * mid < x)
        {
            start = mid + 1;
            // ans = mid; // easily understandable approach
        }
        else
        {
            return mid;
        }
    }
    return start - 1; // efficient approch
    // return ans; // easily understandable approach
}
int main()
{
    int number;
    cin >> number;

    cout << sqrtfn(number);
    cout << endl;
    return 0;
}