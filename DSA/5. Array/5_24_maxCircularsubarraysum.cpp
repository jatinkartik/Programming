#include <bits/stdc++.h>
using namespace std;
int kadane(int arr[], int n)
{
    int res = arr[0];
    int curr = arr[0];
    for (int i = 1; i < n; i++)
    {
        curr = max(arr[i], curr + arr[i]);
        res = max(res, curr);
    }
    return res;
}
int sumArrayCircular(int arr[], int n)
{
    int normalSum = kadane(arr, n);
    if (normalSum < 0)
    {
        return normalSum;
    }
    int arrsum = 0;
    for (int i = 0; i < n; i++)
    {
        arrsum += arr[i];
        arr[i] = -arr[i];
    }
    int minSum = kadane(arr, n);
    int circularSum = minSum + arrsum;
    return max(normalSum, circularSum);
}
int main()
{
    int arr[] = {5, -2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int num = sumArrayCircular(arr, n);
    cout << "Sum : - " << num;

    cout << endl;
    return 0;
}