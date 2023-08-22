#include <bits/stdc++.h>
using namespace std;
int CountOnes(int arr[], int start, int end)
{
    int n = end + 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == 0)
        {
            start = mid + 1;
        }
        else
        {
            if (mid == 0 || arr[mid - 1] != arr[mid])
            {
                return (n - mid);
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int val1 = CountOnes(arr, 0, n - 1);
    cout << val1;
    cout << endl;
    return 0;
}
// output: 24
// Time Complexity: O(logn)
// Space Complexity: O(1)
// Company Tags: Amazon, Microsoft, Paytm, Samsung, Snapdeal, Visa, Walmart
//