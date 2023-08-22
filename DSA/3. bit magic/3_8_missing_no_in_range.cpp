#include <bits/stdc++.h>
using namespace std;
int missingNumberInRange(int n[], int number)
{
    int result = 0;
    for (int i = 0; i < number; i++)
    {
        result = result ^ n[i];
    }
    for (int i = 1; i <= number + 1; i++)
    {
        result = result ^ i;
    }

    return result;
}
int main()
{
    cout << "Enter the no of element in the array: - ";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of " << i << " element : - ";
        cin >> arr[i];
    }
    cout << "The missing number in arr is: - " << missingNumberInRange(arr, n);
    cout << endl;
    return 0;
}
