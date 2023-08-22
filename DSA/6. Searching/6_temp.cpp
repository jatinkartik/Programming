#include <bits/stdc++.h>
using namespace std;
vector<int> twoPointer(int arr[], int start, int end, int requiredSum)
{
    while (start < end)
    {
        int sum = arr[start] + arr[end - 1];
        if (sum > requiredSum)
        {
            end--;
        }
        else if (sum < requiredSum)
        {
            start++;
        }
        else
        {
            return {start, end - 1};
        }
    }
    return {-1};
}
int main()
{
    int arr[] = {2, 3, 4, 5, 7, 8, 9, 11, 22, 35, 48, 51, 82, 95, 115, 270};
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<int> num = twoPointer(arr, 0, size, 135);
    cout << "Vector value : - " << endl;
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << "    " << arr[num[i]];
        cout << endl;
    }

    return 0;
}