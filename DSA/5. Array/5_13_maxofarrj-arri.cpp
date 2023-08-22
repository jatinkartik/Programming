// maximum of arr[j] - arr[i] such that j > i;

#include <bits/stdc++.h>
using namespace std;
void maxOfJminusI(int arr[], int n)
{
    int max = arr[n - 1] - arr[n - 2];
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if ((arr[i] - arr[j]) > max)
            {
                max = arr[i] - arr[j];
            }
        }
    }
    cout << endl
         << max;
}
int main()
{
    // int arr[] = {2, 3, 10, 6, 4, 8, 1};
    // int arr[] = {7, 9, 5, 6, 3, 2};
    int arr[] = {10,20,30};
    int n = sizeof(arr) / sizeof(arr[0]);
    maxOfJminusI(arr, n);
    cout << endl;
    return 0;
}