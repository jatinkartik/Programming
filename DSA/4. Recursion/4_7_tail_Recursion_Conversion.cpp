#include<bits/stdc++.h>
using namespace std;
void nontailRecursiveFun(int n){
    if(n==0){
        return ;
    }
    nontailRecursiveFun(n-1);
    cout<<" "<<n;
}
    // int temp = 0;
void tailRecursionOfAboveFun(int n,int temp){
    if(temp>n){
        return ;
    }
    cout<<" "<<temp;
    tailRecursionOfAboveFun(n,temp+1);
}
int main(){
    nontailRecursiveFun(10);
    cout<<endl;
    tailRecursionOfAboveFun(10,1);
cout<<endl;
return 0;
}


// the above function can be converted to tail recursion with slight modification in the code of function
