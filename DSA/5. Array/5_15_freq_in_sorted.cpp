#include <bits/stdc++.h>
using namespace std;
void freqInSortedArr(int arr[], int n)
{
    int curr = arr[0];
    int freq = 1;
    for (int i = 1; i < n; i++)
    {
        if (curr == arr[i])
        {
            freq++;
        }
        else
        {
            cout << "Current Element : - " << curr << "  " << freq << endl;
            freq = 1;
            curr = arr[i];
        }
    }
    cout << "Current Element : - " << curr << "  " << freq << endl;
}
int main()
{
    // int arr[] = {1, 1, 1, 1, 4, 4, 4, 4, 6, 6, 6, 6, 8, 9, 9, 9, 9, 9,11};
    int arr[] = {3};
    int n = sizeof(arr) / sizeof(arr[0]);
    freqInSortedArr(arr, n);
    cout << endl;
    return 0;
}