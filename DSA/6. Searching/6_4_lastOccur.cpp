#include <bits/stdc++.h>
using namespace std;
int lastOccur(int arr[], int start, int end, int target)
{
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] <= target)
        {
            start = mid + 1;
        }
    }
    if (arr[end] == target)
    {
        return end;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int arr[] = {1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << lastOccur(arr, 0, n, 3);
    cout << endl;
    cout << arr[lastOccur(arr, 0, n, 3)+1];
    cout << endl;
    return 0;
}