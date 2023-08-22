#include <bits/stdc++.h>
using namespace std;
int secondLargestInArray(int arr[], int n)
{
    int res = -1;
    int largest = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[largest] < arr[i])
        {
            res = largest;
            largest = i;
        }
        else if ((res == -1) || (arr[i] > arr[res]))
        {
            res = i;
        }
    }
    return res;
}
int main()
{
    int arr[] = {13, 14, 11, 19, 21, 22, 18, 17, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << secondLargestInArray(arr, n);
    cout << endl;
    return 0;
}