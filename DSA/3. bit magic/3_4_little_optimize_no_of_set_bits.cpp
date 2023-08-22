#include <bits/stdc++.h>
using namespace std;
int lilOptiNoOfSetBits(long long int n)
{
    long long int temp = 1;
    int count = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
int main()
{
    int n = lilOptiNoOfSetBits(999999999999999999);
    cout << endl;
    cout << "No of Set Bits"
         << " : - " << n;
    cout << endl;
    cout<<0xff<<endl;
    return 0;
}

// time complexity: O(logn)
// space complexity: O(1)
// auxiliary space: O(1)            