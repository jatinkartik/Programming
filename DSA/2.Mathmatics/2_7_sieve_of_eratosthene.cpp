#include<bits/stdc++.h>
using namespace std;
void sieve(int n ){
    vector<bool> isprime(n+1,true);
    for (int  i = 2; i<=n; i++)
    {
        if(isprime[i]){
            cout<<i<<" ";
            for (int j = i*i; j <= n; j=j+i)
            {
                isprime[j] = false;
                // set false to all multiple of i
            }
            
        }
    
    }
    
}
int main(){
    sieve(100);
cout<<endl;
return 0;
}

// time complexity : O(nlog(logn))
// space complexity : O(n)
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53
// 59 61 67 71 73 79 83 89 97
// auxilary space : O(n)
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53