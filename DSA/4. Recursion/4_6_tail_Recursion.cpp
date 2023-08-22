#include<bits/stdc++.h>
using namespace std;
void tailRecursion(int n){
    // Start:   // this line is added by the modern compiler along with below to line to optimize
    // the auxilary space complexity of the function
    if(n == 0){
        return;
    }
    cout<<" "<<n;
    tailRecursion(n-1);  // tail call function after this function not need to resume it state
    // so modern compiler will replace this line with  below lines : -
    // n = n-1;
    // goto Start;
}
int main(){
    tailRecursion(10);
cout<<endl;
return 0;
}