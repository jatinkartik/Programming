#include<bits/stdc++.h>
using namespace std;
int log2n(int n){
    if(n==1){
        return 0;
    }
    return 1 + log2n(n/2);
}
int main(){
    int n  = log2n(20);
    cout<<n;    
cout<<endl;
return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int fun(int n){
//     if(n==0){
//         return 0;
//     }
//     fun(n/2);
//     cout<<" "<<n%2;
// }
// int main(){
//     cout<<fun(7);
// cout<<endl;
// return 0;
// }

// output: 1 1 1 
// time complexity: O(logn)
// space complexity: O(logn)
// 7/2 = 3
// 3/2 = 1
// 1/2 = 0
// 1%2 = 1
// 3%2 = 1
// 7%2 = 1
// 1 1 1

// it prints the binary representation of the number
// 7 = 111
// 6 = 110
// 5 = 101
// 4 = 100
// 3 = 011
// 2 = 010
// 1 = 001
// 0 = 000
