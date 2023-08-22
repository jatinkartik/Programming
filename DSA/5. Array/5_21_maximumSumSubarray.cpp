#include <bits/stdc++.h>
using namespace std;
int maxSumSubarray(int arr[], int n)
{
    int maximum = arr[0];
    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++)
        {
            curr = curr + arr[j];
            maximum = max(maximum, curr);
        }
    }
    return maximum;
}
int main()
{
    int arr[] = {1, 2, 7};
    int no = sizeof(arr) / sizeof(arr[0]);
    cout << "N : -" << no << endl;
    int val = maxSumSubarray(arr, no);
    cout << "sum : - " << val;
    cout << endl;
    return 0;
}

// ouput :- 8