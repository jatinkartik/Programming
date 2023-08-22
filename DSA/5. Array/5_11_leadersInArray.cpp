#include <bits/stdc++.h>
using namespace std;
void leadersInArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // for (int j = n - 1; j > i; j--)
        int j;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                break;
            }
        }
        if (j == n)
        {
            cout << endl
                 << arr[i];
        }
    }
}
int main()
{
    int arr[] = {9, 10, 8, 7, 11,11, 5, 6, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    leadersInArray(arr, n);
    cout
        << endl;
    return 0;
}