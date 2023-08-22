#include <bits/stdc++.h>
using namespace std;
int rotatedArray(int arr[], int start, int end, int target)
{
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[start] <= arr[mid])
        {
            if (target < arr[mid] && arr[start] <= target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (arr[mid] < target && arr[end] >= target)
            {
                start = mid + 1;
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
    int arr[] = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num = rotatedArray(arr, 0, size - 1, 1);
    cout << "Num : - " << num;
    cout << endl;
    return 0;
}