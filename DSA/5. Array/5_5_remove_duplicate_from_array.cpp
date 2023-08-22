#include <bits/stdc++.h>
using namespace std;
void removeDuplicateFromArray(int arr[], int n)
{
    int res = 0;
    int temp[n];
    int i;
    for (i = 1; i < n; i++)
    {
        if (arr[i - 1] != arr[i])
        {
            temp[res] = arr[i - 1];
            res++;
        }
    }
    temp[res] = arr[i - 1];
    for (i = 0; i <= res; i++)
    {
        cout << endl
             << temp[i];
    }
}
int main()
{
    int arr[] = {1, 2, 2, 2, 2, 3, 4, 5, 6, 6, 7, 7, 9, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    removeDuplicateFromArray(arr, n);
    cout << endl;
    return 0;
}
// time complexity: O(n)
// space complexity: O(n)
// 
// Output:
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 9
//
