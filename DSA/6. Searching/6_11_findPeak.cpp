#include <bits/stdc++.h>
using namespace std;
int peakIndexInMountainArray(int arr[], int no)
{
    int start = 0;
    int end = no - 1;
    int n = no;
    int mid = start + (end - start) / 2;
    if (start == end)
    {
        return start;
    }
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if ((mid == 0 || arr[mid] >= arr[mid - 1]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
        {
            return mid;
        }
        if (mid > 0 && arr[mid - 1] > arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return mid;
}
int main()
{

    int arr[] = {1, 2, 4, 5, 6, 7, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num = peakIndexInMountainArray(arr, size);
    cout << "Peak :   -   " << num;
    cout << endl;
    return 0;
}