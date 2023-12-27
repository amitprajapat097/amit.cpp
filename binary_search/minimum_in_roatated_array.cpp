#include<iostream>
using namespace std;


int func(int arr[],int n)
{
  int low=0;
  int high=n-1;
  int min=-1;
  
  while(low<=high)
  {
     int mid=(low+high)/2;
     if(arr[mid]=arr[low])
     {
      min=arr[low];
      break;
     }
     if(arr[low]<=arr[high])
     {
      min=arr[low];
      break;
     }
     if(arr[low]<arr[mid])
     {
        min=arr[low];
        low=mid+1;
     }
     else
    {
       min = arr[mid];
       high=mid-1;
     }
     
     
  }
  return min;
}
int main()
{
   int arr[]={5,2};
   int n=2;
   cout<<func(arr,n);
}