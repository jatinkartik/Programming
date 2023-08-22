

#include <bits/stdc++.h>
using namespace std;
int ropeCuttingMethod(int n, int a, int b, int c)
{
    // If the rope length is 0 then the rope can be cut into n parts
    if (n == 0)
    {
        return 0;
    }
    // If the rope length is less than 0 then the rope cannot be cut into n parts
    if (n < 0)
    {
        return -1;
    }
    // This will return the maximum number of cuts possible
    int res = max(max((ropeCuttingMethod(n - a, a, b, c)), (ropeCuttingMethod(n - b, a, b, c))), (ropeCuttingMethod(n - c, a, b, c)));
    // If the rope cannot be cut into n parts then it will return -1
    if (res == -1)
    {
        return -1;
    }
    // If the rope can be cut into n parts then it will return the maximum number of cuts possible
    return res + 1;
}
int main()
{
    cout << "Enter the rope  length : - ";
    int length;
    cin >> length;
    cout << "Enter the value of a , b , and c : - ";
    int a, b, c;
    cin >> a >> b >> c;
    cout << "The maximum number of cuts possible are : - ";
    cout << ropeCuttingMethod(length, a, b, c);
    cout << endl;
    return 0;
}
