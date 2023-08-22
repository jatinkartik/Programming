#include<bits/stdc++.h>
using namespace std;
void fun(int n){
    if(n==0){
        return;
    }
    fun(n-1);
    cout<<endl<<n;
    fun(n-1);
}
int main(){
    fun(3);
cout<<endl;
return 0;
}
// time complexity: O(2^n)
// space complexity: O(n)
// output:
// 1
// 2
// 1
// 3 --> sub central element of the tree
// 1
// 2
// 1
// 4 --> central element of the tree
// 1
// 2
// 1
// 3 --> sub central element of the tree
// 1
// 2
// 1