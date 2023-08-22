#include <bits/stdc++.h>
using namespace std;
int prefixSum(int arr[], int n, int start, int end)
{
    int temp[n];
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        temp[i] = currSum;
    }
    if (start > 0)
    {
        return (temp[end] - temp[start - 1]);
    }
    else
    {
        return temp[end];
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 5, 6, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << prefixSum(arr, n, 2, 5);
    cout << endl;
    return 0;
}