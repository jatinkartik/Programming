#include <bits/stdc++.h>
using namespace std;
int majorityElement(int arr[], int n)
{
    int count = 1;
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[res] == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[res] == arr[i])
        {
            count++;
        }
    }
    if (count <= (n / 2))
    {
        return -1;
    }
    return res;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 4, 4, 4, 2, 15, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Number is at index : -   " << majorityElement(arr, n);
    cout << endl;
    return 0;
}