#include <bits/stdc++.h>
using namespace std;
int majorityElement(int arr[], int n)
{
    int res = 0, count = 1;
    for (int i = 0; i < n; i++)
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
            count = 1;
            res = i;
        }
    }
    if (count <= n / 2)
    {
        return -1;
    }
    return res;
}
int main()
{

    cout << endl;
    return 0;
}