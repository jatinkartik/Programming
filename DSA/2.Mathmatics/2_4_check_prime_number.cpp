#include<bits/stdc++.h>
using namespace std;
bool primeno(int a){
    if(a==1){
        return false;
    }
    if(a == 2|| a==3){
        return true;
    }
    for (int i = 2;i*i<=a;i++){
        if (a%i==0)
        {
            return false;
        }
    }
    return true;
}
bool optiprime(int a){
    if(a==1){
        return false;
    }
    if(a==2|| a==3){
        return true;
    }
    if(a%2==0||a%3==0){
        return false;
    }
    for(int i = 5;i*i<a;i=i+6){
        return false;
    }
    return true;
}
int main(){
    cout<<optiprime(19);
cout<<endl;
return 0;
}


// time complexity of primeno is O(sqrt(n))
// space complexity of primeno is O(1)
// auxilary space complexity of primeno is O(1)
// time complexity of optiprime is O(sqrt(n))
// space complexity of optiprime is O(1)
// auxilary space complexity of optiprime is O(1)