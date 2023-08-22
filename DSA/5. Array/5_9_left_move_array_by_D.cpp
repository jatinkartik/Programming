#include <bits/stdc++.h>
using namespace std;
void leftMoveAnArray(int arr[], int n, int d)
{
    int temp[d];
    for (int j = 0; j < d; j++)
    {
        temp[j] = arr[j];
    }

    int i;
    for (i = d; i < (n); i++)
    {
        arr[i - d] = arr[i];
    }
    for (int i = 0; i < d; i++)
    {
        arr[n - d + i] = temp[i];
    }

    for (i = 0; i < n; i++)
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
    leftMoveAnArray(arr, n, d);
    cout << endl;
    return 0;
}