// maximum of arr[j] - arr[i] such that j > i;
// efficient solution
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
void maxofLargestjminusi(int arr[], int n)
{
    int res = arr[1] - arr[0];
    int minv = arr[0];
    for (int i = 1; i < n; i++)
    {
        res = max(res, arr[i] - minv);
        minv = min(arr[i], minv);
    }
    cout << endl
         << res;
}
int main()
{
    // int arr[] = {2, 3, 10, 6, 4, 8, 1};
    int arr[] = {7, 9, 5, 6, 3, 2};
    // int arr[] = {10, 20, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    maxofLargestjminusi(arr, n);

    cout << endl;
    return 0;
}

// how to  use min and max funtion in c++
// #include <bits/stdc++.h>
// #include <stdlib.h>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int minv = arr[0];
//     int maxv = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         minv = min(arr[i], minv);
