#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    int res = min(a, b);

    while (res > 1)
    {
        if ((a % res == 0) && (b % res == 0))
        {
            break;
        }
        res--;
    }
    return res;
}
int gcdecludeian(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}
int gcdoptiecludeian(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcdoptiecludeian(b, a % b);
    }
}
int main()
{

    int res = gcd(7, 10);
    cout << res << endl;
    res = gcdecludeian(7, 10);
    cout << res << endl;
    res = gcdoptiecludeian(7, 5);
    cout << res << endl;
    cout << endl;
    return 0;
}
// time complexity of gcd is O(min(a,b))
// time complexity of gcdoptiecludeian is O(log(min(a,b)))
// time complexity of gcdecludeian is O(a+b)
// time complexity of main is O(1)
// time complexity of program is O(min(a,b))
// space complexity of program is O(1)
// space complexity of main is O(1)
// space complexity of gcd is O(1)
// auxilary space complexity of gcd is O(1)