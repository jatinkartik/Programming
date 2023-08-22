#include<bits/stdc++.h>
using namespace std;
int lcm(int a ,int b){
    int mul = a*b;
    for(int i =2;i<min(a,b);i++){
        if (a%i==0&&b%i==0)
        {
            mul  = mul/i;
        }
    }
    return mul;
}
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
int lcmopti(int a,int b){
    int gc = gcd(a,b);
    return (a*b)/gc;
}
int main(){
int lc = lcmopti(15,15);
cout<<lc<<endl;
cout<<endl;
return 0;
}

// time complexity of lcm is O(min(a,b))
// space complexity of lcm is O(1)
// auxilary space complexity of lcm is O(1)
// space complexity of main is O(1)
// time complexity of main is O(1)
// time complexity of lcm opti is O(log(min(a,b)))
// time complexity of gcd is O(log(min(a,b)))
// space complexity of gcd is O(1)
// auxilary space complexity of gcd is O(1)
