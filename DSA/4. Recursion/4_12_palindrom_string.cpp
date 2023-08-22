#include <bits/stdc++.h>
using namespace std;
bool palidrome(string &str, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    return (str[start] == str[end]) && palidrome(str, start + 1, end - 1);
}
int main()
{
    cout << "Enter the String : -   ";
    string test;
    getline(cin, test);
    cout << palidrome(test, 0, test.length()-1);
    cout << endl;
    return 0;
}