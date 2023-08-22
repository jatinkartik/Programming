// binary power iterative representation using binary exponentiation
#include<bits/stdc++.h>
using namespace std;

int binarypower(int n,int pow){
    int res = 1;
    while(pow>0){
        if(pow%2!=0){
            res = res*n;
        }
        n = n*n;
        pow = pow/2;
    }
    return res;
}
int main(){
    cout<<binarypower(65,2);
cout<<endl;
return 0;
}
// // time complexity : O(logn)
// // space complexity : O(1)
// // auxilary space : O(1)
// // 4225
// Compare this snippet from 2_9_gcd.cpp:
// #include<bits/stdc++.h>
// using namespace std;
// int gcd(int a,int b){
//     if(b==0){
//         return a;
//     }
//     return gcd(b,a%b);
// }
// int main(){
//     cout<<gcd(65,2);
// cout<<endl;
// return 0;
// }
// // time complexity : O(logn)
// // space complexity : O(logn)
// // auxilary space : O(logn)
// // 1
// Compare this snippet from 2_10_lcm.cpp:
// #include<bits/stdc++.h>
// using namespace std;
// int gcd(int a,int b){
//     if(b==0){
//         return a;
//     }
//     return gcd(b,a%b);
// }
// int lcm(int a,int b){
//     return (a*b)/gcd(a,b);
// }
// int main(){
//     cout<<lcm(65,2);
// cout<<endl;
// return 0;
// }
// // time complexity : O(logn)
// // space complexity : O(logn)
// // auxilary space : O(logn)
// // 130
// Compare this snippet from 2_11_fibonacci.cpp:
// #include<bits/stdc++.h>
// using namespace std;
// int fib(int n){
//     if(n==0||n==1){
//         return 1;
//     }
//     return fib(n-1)+fib(n-2);
// }
// int main(){
//     cout<<fib(6);
// cout<<endl;
// return 0;
// }
//
