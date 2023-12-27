#include <iostream>
using namespace std;
int getunique(int arr[],int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }return ans;
}
int main()
{
    int arr[]={2,3,2,4,4};
    int size=5;
    int unique=getunique(arr,size);
    cout<<unique;
}