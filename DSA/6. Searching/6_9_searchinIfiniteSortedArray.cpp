#include <bits/stdc++.h>
using namespace std;
int infinteArray(int arr[], int target)
{
    int start = 0;
    int end = 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            if (target > arr[end])
            {
                start = end + 1;
                end = start * start;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 3, 4, 5, 7, 8, 9, 11, 22, 35, 48, 51, 82, 95, 115, 270};
    cout << infinteArray(arr, 95);
    cout << endl;
    return 0;
}