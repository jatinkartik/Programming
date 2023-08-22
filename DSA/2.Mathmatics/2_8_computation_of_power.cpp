#include<bits/stdc++.h>
using namespace std;
int computationofpower(int n, int pow){
    if(pow==0 && n>0){
        return 1;
    }
    if(pow==1){
        return n;
    }
 if(pow%2==0){
    int l = computationofpower(n,pow/2);
    return l*l;
 } else{
    return computationofpower(n,pow-1)*n;
 }
}
int main(){
    cout<<computationofpower(65,2);
cout<<endl;
return 0;
}
// time complexity : O(logn)
// space complexity : O(logn)
// auxilary space : O(logn)
// 4225