#include<bits/stdc++.h>
using namespace std;
int nthFib(int n){
    if(n<=1){
        return n;
    }
    return nthFib(n-1) + nthFib(n-2);
}
int main(){
    cout<<nthFib(3);
    
cout<<endl;
return 0;
}