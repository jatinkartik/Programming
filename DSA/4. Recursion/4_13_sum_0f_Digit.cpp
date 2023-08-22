#include <bits/stdc++.h>
using namespace std;
int sumOfDigit(int n)
{
    {

        if (n<=9)
        {
            return n;
        }
        return (n % 10) + sumOfDigit(n / 10);
    }
}
int main()
{
    int num;
    cout << "Enter the value of N : - ";
    cin >> num;
    cout << sumOfDigit(num);
    cout << endl;
    return 0;
}