#include<iostream>
using namespace std;
#include<vector>
int bs(vector<int>a,int s,int e,int n)
{
    
    if(s>e)return -1;
    int mid=s+e/2;
    if(a[mid]==n)
    return mid;
    else if(a[mid]>n)
    {
        bs(a,s,mid-1,n);
    }
    else bs(a,mid+1,e,n);
}
int main()
{
    int n=21;
    vector<int>a={2,3,4,5,6,7,8,9};
    int e=7;
    int s=0;
    int ans=bs(a,s,e,n);
    cout<<ans;
}