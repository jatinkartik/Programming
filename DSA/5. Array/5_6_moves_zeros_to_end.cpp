#include <bits/stdc++.h>
using namespace std;
void movesZerosToEnd(int arr[], int n)
{
    int index = n - 1;
    int j;

    for (int i = 0; i < index; i++)
    {
        j = i;
        if (arr[i] == 0)
        {

            while (j < index)
            {
                swap(arr[j], arr[j + 1]);
                j++;
            }
            index--;
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
    clock_t tStart = clock(),end;
    int arr[] = {1, 0, 2, 5, 0, 64, 0, 454, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    movesZerosToEnd(arr, n);
    cout << endl;
    end = clock();
    cout << "Time taken: " << (double)(end - tStart) / CLOCKS_PER_SEC << endl;
    return 0;
}