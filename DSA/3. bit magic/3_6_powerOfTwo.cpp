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
    tablefill();
    int result = 0;
    result = result + table[n & 0xff];
    n = n >> 8;
    result = result + table[n & 0xff];
    n = n >> 8;
    result = result + table[n & 0xff];
    n = n >> 8;
    result = result + table[n & 0xff];

    return result;
}
bool powerOfTwo(long long int n)
{
    if (optiSetBitCount(n) == 1)
    {
        return true;
    }
    return false;
}

bool optiPowerOfTwo(long long int n){
    if(n==0){
        return false;
    } else{
        return ((n&(n-1))==0);
    }
}
int main()
{
    long long int n;
    cout << "Enter the value of n : -";
    cin >> n;
    cout << "The number " << n << " is power of Two : -" << powerOfTwo(n)<<endl;
    cout << "The number " << n << " is power of Two : -" << optiPowerOfTwo(n);

    cout << endl;
    return 0;
}
// time complexity: O(1)
// time complexity of optiSetBitCount(): O(1)
// Aux Space: O(1)
// Company Tags: Amazon, Flipkart, Microsoft, Morgan Stanley, OYO Rooms, Paytm, Samsung, SAP Labs, Snapdeal, Visa, Walmart
