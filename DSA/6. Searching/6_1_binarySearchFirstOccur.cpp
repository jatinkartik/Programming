#include <bits/stdc++.h>
using namespace std;
int firstOccurBin(int arr[], int start, int end, int target)
{
    int mid = start + (end - start) / 2;
    if (arr[mid] > target)
    {
        firstOccurBin(arr, start, mid - 1, target);
    }
    else if (arr[mid] < target)
    {
       return firstOccurBin(arr, mid + 1, end, target);
    }
    else
    {
        if (mid == 0 || arr[mid - 1] != arr[mid])
        {
            return mid;
        }
        else
        {
           return firstOccurBin(arr, start, mid - 1, target);
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << firstOccurBin(arr, 0, n, 3);
    cout << endl;
    return 0;
}