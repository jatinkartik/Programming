#include <bits/stdc++.h>
using namespace std;
int equilibrium(int arr[], int n)
{
    // int temp[n];
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        // temp[i] = currSum;
    }
    int leftSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (leftSum == currSum - arr[i])
        {
            return true;
        }
        leftSum +=arr[i];
        currSum -= arr[i];
    }

    return 0;
}

int main()
{
    // int arr[] = {5, -2, 2};
    int arr[] = {1,2,3,5,-4,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << equilibrium(arr, n);
    cout << endl;
    return 0;
}
