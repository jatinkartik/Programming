#include <bits/stdc++.h>
using namespace std;
int repeatedElement(int arr[], int n)
{
    vector<bool> num(n, false);
    for (int i = 0; i < n; i++)
    {
        if (num[arr[i]])
        {
            // return arr[i];
            return i;
        }
        num[arr[i]] = true;
    }
    return -1;
}
int withoutAuxSolution(int arr[], int n)
{
    int slowSpeed = arr[0];
    int fastSpeed = arr[0];
    do
    {
        slowSpeed = arr[slowSpeed];
        fastSpeed = arr[arr[fastSpeed]];
    } while (slowSpeed != fastSpeed);

    slowSpeed = arr[0];
    while (slowSpeed != fastSpeed)
    {
        slowSpeed = arr[slowSpeed];
        fastSpeed = arr[fastSpeed];
    }
    return slowSpeed;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int num = repeatedElement(arr, n);
    cout << "Repeated Element index :  - " << num;

    cout << endl;
    return 0;
}