#include <bits/stdc++.h>
using namespace std;
int evenOddSubArray(int arr[], int n)
{
    int curr = 1;
    int maxNum = 1;
    for (int i = 1; i < n; i++)
    {
        if ((arr[i] % 2) != (arr[i - 1] % 2))
        {
            curr++;
        }
        else
        {
            curr = 1;
        }
        maxNum = max(curr, maxNum);
    }
    return maxNum;
}
int main()
{
    int arr[] = {10, 12, 14, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum : - " << evenOddSubArray(arr, n);
    cout << endl;
    return 0;
}
// time complexity : - O(n)
// space complexity : - O(1)