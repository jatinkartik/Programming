#include <bits/stdc++.h>
using namespace std;
int table[256];

void tablefill()
{
    table[0] = 0;
    for (int i = 1; i < 256; i++)
    {
        table[i] = (i & 1) + table[i / 2];
    }
}
vector<string> powerSetOfString(string st)
{
    tablefill();
    int length = st.length();
    vector<string> ap;
    string word = "";
    ap.push_back(word);
    for (int i = 1; i < pow(2, length); i++) // power set loop
    {
        // table[(length-1)& 0xff];
        int h = 1;
        word = "";
        cout << endl;
        for (int j = 0; j < length; j++) // bit checker loop
        {
            if ((i & h) != 0)
            // if ((i & (1<<j)) != 0)// this one is best for space complexity
            {
                // cout << st[j];
                word = word + st[j];
            }
            h = h << 1;
        }
        cout << endl;
        cout << endl
             << word << endl;
        ap.push_back(word);
    }
    return ap;
}
int main()
{
    string n = "abc";
    vector<string> test = powerSetOfString(n);
    for (int i = 0; i < n.length(); i++)
    {
        // cout<<endl<<test[i];
    }
    cout << test.size();
    cout << endl;
    return 0;
}
// time complexity: O((2^n)*n)
// Aux Space: O(1)
// space complexity: O(2^n)
