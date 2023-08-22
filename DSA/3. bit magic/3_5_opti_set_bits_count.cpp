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
int optiSetBitCount(long long int n)
{
    int time = sizeof(n);
    int result = 0;
    while (time > 0)
    {
        result = result + table[n & 0xff];
        n = n >> 8;
        time--;
    }
    return result;
}

int main()
{
    tablefill();
    int n = optiSetBitCount(256);
    cout << endl
         << n;
    cout << endl;
    return 0;
}

// time complexity: O(1)
// time complexity of optiSetBitCount(): O(1)
// company tags: Amazon, Flipkart, Microsoft, Morgan Stanley, OYO Rooms, Paytm, Samsung, SAP Labs, Snapdeal, Visa, Walmart