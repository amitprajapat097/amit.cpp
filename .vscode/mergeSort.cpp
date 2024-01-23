/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
// using namespace std;
#include<vector>
vector<int> merge(vector<int>a,int low,int mid,int high)
{
    vector<int>ans(high-low +1);
    int ind=low;
    int ind1=low;
    int ind2=mid+1;
    while(ind1<=mid && ind2<=high)
    {
        if(a[ind1]<a[ind2])
        {
           ans[ind]=a[ind1];
            ind1++;
        }
        else
        {
            ans[ind]=a[ind2];
            ind2++;
        }
        ind++;
    }
    
   while (ind1 <= mid) {
        ans[ind] = a[ind1];
        ind1++;
        ind++;
    }

    while (ind2 <= high) {
        ans[ind] = a[ind2];
        ind2++;
        ind++;
    }

    return ans;
}
vector<int> mergeSort(vector<int>a,int low,int high)
{
    if(low>=high)
    return {a[low]};
    int mid=low+high/2;
    mergeSort(a,low,mid);
    mergeSort(a,(mid+1),high);
    return merge(a,low,mid,high);
}
int main()
{
  vector<int>a={2,3,1,4,5,1,6,7,9};
  int low=0;
  int high=9;
  vector<int>ans=mergeSort(a,low,high);
  for(int i=0;i<high;i++)
  {
      cout<<ans[i]<<" ";
  }
}
