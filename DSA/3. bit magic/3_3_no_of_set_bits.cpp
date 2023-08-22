#include<bits/stdc++.h>
using namespace std;
int noOfSetBits(long long int n){ 
    long long int temp = 1;
    int count = 0;
    for(int i=1;i<sizeof(n)*8;i++){
        if((n & temp)!=0){
            count++;
        }
        temp = temp<<1;
    }
    return count;
}
int main(){
    long long int n = 999999999999999999;
    cout<<noOfSetBits(n);

cout<<endl;
return 0;
}

//time complexity: O(logn)
//space complexity: O(1)
//auxiliary space: O(1)
// company tags: Amazon, Flipkart, Microsoft, Morgan Stanley, OYO Rooms, Paytm, Samsung, SAP Labs, Snapdeal, Visa, Walmart