#include <bits/stdc++.h>
using namespace std;
void getWater(int arr[], int n)
{
    int result = 0;
    for (int i = 1; i < n - 1; i++)
    {
        int lmax = arr[i];
        for (int r = 0; r < i; r++)
        {
            lmax = max(lmax, arr[r]);
        }
        int rmax = arr[i];
        for (int l = i + 1; l < n; l++)
        {
            rmax = max(lmax, arr[l]);
        }
        result = result + (min(lmax, rmax) - arr[i]);
    }
    cout << "Result : - " << result;
}
int main()
{
    int arr[] = {3, 5, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    getWater(arr, n);
    cout << endl;
    return 0;
}