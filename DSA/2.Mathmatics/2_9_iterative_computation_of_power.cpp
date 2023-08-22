#include<bits/stdc++.h>
using namespace std;
int iterativepower(int number ,int n){
    int result = 1;
    while(n>0){
        if(n%2!=0){
            result  = result * number;
        }
        number = number * number;
        n =n/2;
    }
    return result;
}
int main(){
    cout<<iterativepower(2,2);

cout<<endl;
return 0;
}