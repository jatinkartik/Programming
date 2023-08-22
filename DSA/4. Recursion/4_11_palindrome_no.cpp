#include <bits/stdc++.h>
using namespace std;
string recCheck(string str, int length)
{
    if (length == 0)
    {
        return "";
    }
    return str[length - 1] + recCheck(str, length - 1);
}
bool palindromeRec(string st)
{
    string temp = st;
    int length = st.length();

    temp = recCheck(temp, length);
    cout << endl
         << "temp string is : -" << temp;
    cout << endl
         << "main string is : -" << st;
    cout << endl;
    // cout<<st.compare(temp);
    // cout<<endl;
    if ((st.compare(temp))==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    cout << palindromeRec("a");
    cout << endl;
    return 0;
}