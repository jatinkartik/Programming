#include <bits/stdc++.h>
using namespace std;
int buySellStock(int arr[], int n)
{
    int profit = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            profit += arr[i] - arr[i - 1];
        }
    }
    return profit;
}
int main()
{
    int arr[] = {1, 5, 3, 4, 9};
    int end = sizeof(arr) / sizeof(arr[0]) - 1;
    // int n = maxProfit(arr, 0, end);
    int n = buySellStock(arr, end);
    cout << "Profit : - " << n;
    cout << endl;
    return 0;
}