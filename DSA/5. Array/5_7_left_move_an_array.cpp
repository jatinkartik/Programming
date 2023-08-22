#include <bits/stdc++.h>
using namespace std;
void leftMoveAnArray(int arr[], int n)
{
    int temp = arr[0];
    int i;
    for (i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[i - 1] = temp;
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
    leftMoveAnArray(arr, n);

    cout << endl;
    return 0;
}

// time complexi    ty: O(n)
// space complexity: O(1)