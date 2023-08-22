#include <bits/stdc++.h>
using namespace std;
vector<int> twoOddNoInArray(int n[], int number)
{
    int result = 0;
    for (int i = 0; i < number; i++)
    {
        result = result ^ n[i];
    }
    int temp = result;
    int bitcount = 1;
    // for (int i = 0; i < sizeof(result); i++)
    // {
    //     if ((result & bitcount) != 0)
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         cout << endl
    //              << "bit count value is : -" << bitcount << endl;
    //         bitcount = bitcount << 1;
    //         cout << endl
    //              << "bit count value is : -" << bitcount << endl;
    //     }
    // }
    bitcount = result & (~ (result - 1));
    cout << endl
         << "bit count value is : -"
         << " " << bitcount << endl;

    for (int i = 0; i < number; i++)
    {
        if ((n[i] & bitcount) == 0)
        {
            result = result ^ n[i];
        }
    }
    cout << endl
         << "The first number is : -"
         << " " << result;
    for (int i = 0; i < number; i++)
    {
        if ((n[i] & bitcount) != 0)
        {
            temp = temp ^ n[i];
        }
    }
    cout << endl
         << "The first number is : -"
         << " " << temp;
    cout << endl;
    vector<int> v;
    v.push_back(result);
    v.push_back(temp);
    return v;
}
int main()
{
    cout << "Enter the no of element in the array: - ";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of " << i + 1 << " element : - ";
        cin >> arr[i];
    }
    vector<int> temp = twoOddNoInArray(arr, n);
    cout << "The number odd num in arr is: - " << temp[0] << " and " << temp[1];
    cout << endl;
    return 0;
}
// time complexity: O(n)
// space complexity: O(1)
// auxilary space complexity: O(1)

// program to check first set bit in a number