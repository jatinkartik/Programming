#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5,k = 3;
    int temp = 1;
    temp= temp<<1;
    cout<<temp;
    if((n&temp)!=0){
        cout<<endl<<"bit is set"<<endl;
    } else {
        cout<<endl<<"bit is not set"<<endl;
    }
cout<<endl;
return 0;
}