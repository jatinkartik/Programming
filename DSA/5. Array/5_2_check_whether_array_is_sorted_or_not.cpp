#include<bits/stdc++.h>
using namespace std;
void arraySortedOrNot(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        if(arr[i-1]>arr[i]){
            cout<<"No";
            return;
        } 
    }
    cout<<"Yes";
}
int main(){
    int arr[] = {1,2,3,4,9,6,6,7,7,7,7,7,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    arraySortedOrNot(arr, n);
cout<<endl;
return 0;
}