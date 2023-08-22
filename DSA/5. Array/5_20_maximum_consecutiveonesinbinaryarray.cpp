#include <bits/stdc++.h>
using namespace std;
void maxConsecutiveOne(int arr[], int n)
{
    int curr = arr[0];
    int maxOne = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i])
        {
            curr++;
        }
        else
        {
            maxOne = max(maxOne, curr);
            curr = 0;
        }
    }
    maxOne = max(maxOne, curr);
    cout << endl
         << "number : - " << maxOne;
}
int main()
{
    int arr[] = {1, 1, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    maxConsecutiveOne(arr, n);

    cout << endl;
    return 0;
}
// time complexity = theta(n)
// auxilary space = theta(1)