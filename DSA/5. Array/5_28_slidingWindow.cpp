#include <bits/stdc++.h>
using namespace std;
int slidingWindow(int arr[], int n, int k)
{
    int currSum = 0;
    int maxSum = INT8_MIN;
    for (int i = 0; i < k; i++)
    {
        currSum += arr[i];
    }
    maxSum = max(currSum, maxSum);
    for (int i = 1; i < n-k+1; i++)
    {
        currSum = (currSum - arr[i - 1]) + arr[i + k - 1];
        maxSum = max(currSum, maxSum);
    }
    return maxSum;
}
int main()
{
    int arr[] = {1, 8, 30, -5, 20, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << slidingWindow(arr, n, 2);

    cout << endl;
    return 0;
}

// write a question for the abpve code is to find the maximum sum of k consecutive elements in an array