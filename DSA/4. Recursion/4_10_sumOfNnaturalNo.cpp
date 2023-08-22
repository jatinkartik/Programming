#include<bits/stdc++.h>
using namespace std;
int sumOfNNaturalNo(int n){
// int sumOfNNaturalNo(int n,int k=0){
    if(n ==0){
        return 0;
    }
    return n + sumOfNNaturalNo(n-1);
    // return n + sumOfNNaturalNo(n-1,k+n);
}
int main(){
    cout<<sumOfNNaturalNo(10);
cout<<endl;
return 0;
}


// output:
// 55
// debug:
// 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0