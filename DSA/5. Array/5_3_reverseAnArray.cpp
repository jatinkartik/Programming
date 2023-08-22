#include <bits/stdc++.h>
using namespace std;
void reverseAnArray(vector<int> &arr)
{
    int n = arr.size();
    int temp = arr[0];
    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[i], arr[(n - 1) - i]);
    }
    for (int j = 0; j < n; j++)
    {
        cout << endl
             << arr[j];
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverseAnArray(arr);
    cout << endl;
    return 0;
}