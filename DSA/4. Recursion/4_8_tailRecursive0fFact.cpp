#include <bits/stdc++.h>
using namespace std;
int nonTailRecursive(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * nonTailRecursive(n - 1);
}
// intially pass k =1 in the below funtion
int tailRecursiveAproach(int n, int k)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }

    return tailRecursiveAproach(n - 1, k * n);
}
int main()
{

    cout << endl;
    return 0;
}