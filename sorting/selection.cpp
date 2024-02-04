// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int arr[]={23,34,2,1,0,16,45};
    int n=7;
    
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    
    for(auto i:arr)cout<<i<<" ";
}