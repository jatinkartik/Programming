#include <bits/stdc++.h>
using namespace std;
void removeDuplicateSortedArray(int arr[], int n)
{
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] == arr[i + 1])
        {
            int var = i;
            while (var < (n - 1))
            {
                arr[var] = arr[var + 1];
                // if (arr[var] == arr[var + 1])
                // {
                //     arr[var] = NULL;
                // }
                var++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << endl
             << arr[i];
    }
}
int main()
{
    int arr[] = {1, 2, 2, 2, 2, 3, 4, 5, 6, 6, 7, 7, 9, 9, 9, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    removeDuplicateSortedArray(arr, n);
    cout << endl;
    return 0;
}

// time complexity: O(n^2)
// space complexity: O(1)

