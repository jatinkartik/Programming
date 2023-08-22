#include <bits/stdc++.h>
using namespace std;
void permutationOfString(string str, int i = 0)
{
    if (i == str.length() - 1)
    {
        cout << endl
             << str;
    }
    for (int j = i; j < str.length(); j++)
    {
        swap(str[i], str[j]);
        permutationOfString(str, i + 1);
        swap(str[i], str[j]);
    }
}
int main()
{
    permutationOfString("abcd");
    cout << endl;
    return 0;
}