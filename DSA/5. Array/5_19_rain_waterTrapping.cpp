#include <bits/stdc++.h>
using namespace std;
void rainWaterTrapping(int arr[], int n)
{
    int right[n];
    int left[n];
    left[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        left[i] = max(arr[i], left[i - 1]);
    }
    right[n-1] = arr[n-1];
    for (int j = n - 2; j >= 0; j--)
    {
        right[j] = max(arr[j], right[j + 1]);
    }
    int result = 0;
    for (int k = 0; k < n; k++)
    {
        result += (min(left[k], right[k])) - arr[k];
    }
    cout << "Result : - " << result;
}
int main()
{
    int arr[] = {3, 1, 2, 4, 0, 1, 3, 2};
    /////////////3, 3, 3, 4, 4, 4, 4, 4
    /////////////4, 4, 4, 4, 3, 3, 3, 2
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << endl
         << n << endl;
    rainWaterTrapping(arr, n);

    cout << endl;
    return 0;
}