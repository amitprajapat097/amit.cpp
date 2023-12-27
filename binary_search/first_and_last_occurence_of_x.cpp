#include<iostream>
using namespace std;
#include<stdlib.h>
void func(int arr[],int x,int n)
{
    int first,last=-1;
    for(int i=0;i=n;i++)
    {
        if(arr[i]==x)
        {
            if(first==-1)
            {
                first=i;
            }

           
              last=i;
            
        }
    }
    cout<<"{"<<first<< last<<"}";
}
int main()
{
    // cout<<"amit"<<endl;
    int arr[]={2,3,4,5};
    int x=2;
    int n=4;
    cout<<func(arr,x,n)<<endl;
    return 0;
}