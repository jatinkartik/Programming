#include <bits/stdc++.h>
using namespace std;
void leadersInArrayEfficient(int arr[], int n)
{
    int curr = arr[n - 1];
    cout << endl
         << curr;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > curr)
        {
            curr = arr[i];
            cout << endl
                 << curr;
        }
    }
}
int main()
{
    int arr[] = {9, 10, 8, 7, 11, 11, 5, 6, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    leadersInArrayEfficient(arr, n);
    cout
        << endl;
    return 0;
}

// output will be in reverse order
// to print output in order store in array then reverse array time complexity will be same o(n)
// O(n) auxilary space is required
