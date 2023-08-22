#include <bits/stdc++.h>
using namespace std;
int maxProfit(int arr[], int start, int end)
{
    int profit = 0;
    if (end <= start)
    {
        return 0;
    }
    int curr_profit = 0;
    for (int i = start; i < end; i++)
    {
        for (int j = i + 1; j <= end; j++)
        {
            if (arr[j] > arr[i])
            {
                curr_profit = arr[j] - arr[i] + maxProfit(arr, start, i - 1) + maxProfit(arr, j + 1, end);
            }
            profit = max(curr_profit, profit);
        }
    }
    return profit;
}
int buySellStock(int arr[], int n)
{
    return maxProfit(arr, 0, n);
}
int main()
{
    int arr[] = {1, 5, 3, 4, 9};
    int end = sizeof(arr) / sizeof(arr[0]) - 1;
    // int n = maxProfit(arr, 0, end);
    int n = buySellStock(arr, end);
    cout << "Profit :- " << n;
    cout << endl;
    return 0;
}