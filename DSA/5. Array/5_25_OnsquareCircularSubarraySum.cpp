#include <bits/stdc++.h>
using namespace std;
int CircularSubArraySum(int arr[], int n)
{
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        int currsum = arr[i];
        int maxsum = arr[i];
        for (int k = 1; k < n; k++)
        {
            int index = (i + k) % 2;
            currsum += arr[index];
            maxsum = max(maxsum, currsum);
        }
        res = max(res, maxsum);
    }
    return res;
}
int main()
{
    int arr[] = {5, -2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum : - " << CircularSubArraySum(arr, n);

    cout << endl;
    return 0;
}