#include<bits/stdc++.h>
using namespace std;
void Nto1(int n){
    if( n == 0){
        return ;
    }
    cout<<" "<<n; // print n to 1 in reverse order
    Nto1(n-1);
    cout<<" "<<n; // this will print no in ascending  order 
}
int main(){
    Nto1(10);
cout<<endl;
return 0;
}