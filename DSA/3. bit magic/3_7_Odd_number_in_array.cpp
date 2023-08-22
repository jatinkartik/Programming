#include<bits/stdc++.h>
using namespace std;
int oddNoInArray(int n[], int number){
    int result = 0;
    for (int i = 0; i < number; i++)
    {
        result = result^n[i];
    }
    
    return result;
}
int main(){
    cout<<"Enter the no of element in the array: - ";
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the value of "<< i<<" element : - ";
        cin>>arr[i];
    }
    cout<<"The number odd num in arr is: - "<<oddNoInArray(arr,n);
cout<<endl;
return 0;
}

// how to create a file in linux with command line is