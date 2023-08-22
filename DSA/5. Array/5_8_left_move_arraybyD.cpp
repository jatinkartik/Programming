#include <bits/stdc++.h>
using namespace std;
void leftMoveAnArray(int arr[], int n, int D)
{
    int i;
    for (int j = 0; j < D; j++)
    {

        int temp = arr[0];
        for (i = 1; i < n; i++)
        {
            arr[i - 1] = arr[i];
        }
        arr[i - 1] = temp;
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
    int D = 6;
    leftMoveAnArray(arr, n, D);

    cout << endl;
    return 0;
}
// time complexity: O(n*D)
// space complexity: O(1)
