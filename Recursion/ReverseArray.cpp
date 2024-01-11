// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<algorithm>
void reverse(int i,int n,int arr[])
{
    if(i>=n/2)
    return;
    
    swap(arr[i],arr[n-1-i]);
    reverse(i+1,n,arr);
}
int main() {
    int arr[]={2,3,4};
    int n=3;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        
        
    }cout<<endl;
    reverse(0,n,arr);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}