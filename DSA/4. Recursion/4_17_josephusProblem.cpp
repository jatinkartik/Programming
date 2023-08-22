#include <bits/stdc++.h>
using namespace std;
int josephusProblem(int n, int k)
{
    if (n == 1)
    {
        return 0;
    }
    return (josephusProblem(n - 1, k) + k) % n;
}
int varNojosephus(int n, int k, int i = 0)
{
    return (josephusProblem(n, k) + i) % n;
}
int main()
{
    cout << varNojosephus(12, 2, 5);
    cout << endl;
    return 0;
}