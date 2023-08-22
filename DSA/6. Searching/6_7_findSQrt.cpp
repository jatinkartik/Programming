#include <bits/stdc++.h>
using namespace std;
int findSqrt(int arr[], int start, int end, int x)
{
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if ((arr[mid] * arr[mid]) > x)
        {
            end = mid - 1;
        }
        else if ((arr[mid] * arr[mid]) < x)
        {
            start = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return start;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = findSqrt(arr, 0, size, 9);
    cout << "SQRT : - " << n;
    cout << endl;
    return 0;
}