#include <bits/stdc++.h>
using namespace std;
int *reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        swap(arr[end], arr[start]);
        start = start + 1;
        end = end - 1;
    }
    return arr;
}
void leftMoveArray(int arr[], int n, int d)
{
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << endl
             << arr[i];
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 6;
    leftMoveArray(arr, n, d);
    cout << endl;
    return 0;
}