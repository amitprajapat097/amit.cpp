// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void select(int arr[],int start,int n)
{
    if(start==n-1)return;
    
    int minIndex=start;
    // 23,34,2,1,0,16,45
    for(int i=start+1;i<n;i++)
    {
        if(arr[i]<arr[minIndex])
        minIndex=i;
        // cout<<minIndex<<" ";
    }
    
    int temp=arr[minIndex];
    arr[minIndex]=arr[start];
    arr[start]=temp;
    // cout<<start<<" "<<minIndex<<endl;
    // for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    // cout<<endl;
    select(arr,start+1,n);
}
int main() {
int arr[]={23,34,2,1,0,16,45};
int n=7;
select(arr,0,7);
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
    
}