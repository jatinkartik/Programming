#include <bits/stdc++.h>
using namespace std;
int firstOccur(int arr[], int start, int end, int target)
{
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            if (mid == 0 || arr[mid] != arr[mid - 1])
            {
                return mid;
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
    int arr[] = {1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << firstOccur(arr, 0, n, 3);
    cout << endl;
    return 0;
}