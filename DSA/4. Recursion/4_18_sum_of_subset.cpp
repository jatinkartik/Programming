#include <bits/stdc++.h>
using namespace std;
int sumOfSubset(int arr[], int length, int sum)
{
    if (length == 0)
    {
        return (sum == 0) ? 1 : 0;
    }
    return sumOfSubset(arr, length - 1, sum) +
           sumOfSubset(arr, length - 1, sum - arr[length - 1]);
}

int main()
{
    int arr[] = {10, 13, 2};
    int res = sumOfSubset(arr, 3, 16);
    cout << endl
         << res;
    cout << endl;
    return 0;
}