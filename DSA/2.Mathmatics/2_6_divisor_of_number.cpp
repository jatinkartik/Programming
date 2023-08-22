#include<bits/stdc++.h>
using namespace std;
void divisor(int n){
    for(int i =1;i*i<=n;i++){
        if(n%i==0){
            cout<<" "<<i;
        if (i!=n/i)
        {
            cout<<" "<<n/i;
        }
        }
        
    }
}
void divisorSorted(int n){
    int i;
    for (i = 1; i*i<n; i++)
    {
        if(n%i==0){
            cout<<" "<<i;
        }
    }
    for (; i >= 1; i--)
    {
        if(n%i==0){
            cout<<" "<<n/i;
        }
    }
    
    
}
int main(){
    divisor(100);
    cout<<endl;
    divisorSorted(100);
cout<<endl;
return 0;
}
// time complexity of divisor is O(sqrt(n))
// space complexity of divisor is O(1)
// auxilary space complexity of divisor is O(1)
// time complexity of divisorSorted is O(sqrt(n))
// space complexity of divisorSorted is O(1)
// auxilary space complexity of divisorSorted is O(1)
// Compare this snippet from 2_7_number_of_divisor.cpp: