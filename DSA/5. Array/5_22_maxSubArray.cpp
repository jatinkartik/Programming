#include <bits/stdc++.h>
using namespace std;
int maxSubArray(int arr[], int n)
{
    int maxSum = arr[0];
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr += arr[i];
        maxSum = max(maxSum, max(arr[i], curr));
        if (curr <= arr[i])
        {
            curr = arr[i];
        }
    }
    return maxSum;
}
int main()
{
    int arr[] = {-5, 1, -2, 3, -1, 2, -2};
    int no = sizeof(arr) / sizeof(arr[0]);
    cout << "N : -" << no << endl;
    int val = maxSubArray(arr, no);
    cout << "sum : - " << val;

    cout << endl;
    return 0;
}

// time complexity : - O(n)
// space complexity : - O(1)
// output : -  