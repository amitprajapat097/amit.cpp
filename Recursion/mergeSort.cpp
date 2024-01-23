#include<iostream>
using namespace std;
#include<vector>
void merge(vector<int>& nums,int low,int mid,int high)
{
    vector<int>temp;
    int ind1=low;
    int ind2=mid+1;

    while(ind1<=mid && ind2<=high)
    {
        if(nums[ind1]<nums[ind2])
        {
            temp.push_back(nums[ind1]);
            ind1++;
        }
        else
        {
          temp.push_back(nums[ind2]);
          (ind2)++;
        }


    }
    while(ind1<=mid)
    {
         temp.push_back(nums[ind1]);
            ind1++;
    }
    while(ind2<=high)
    {
         temp.push_back(nums[ind2]);
          (ind2)++;
    }

    // copy into originalarray
    for(int i=0;i<temp.size();i++)
    {
        nums[i]=temp[i];
    }
}
void mergeSort(vector<int> & nums,int low,int high)
{
    if(low==high)
    return;
    if(low<high)
    int mid=low+high/2;
    mergeSort(nums,low,mid);
    mergeSort(nums,mid+1,high);
    merge(nums,low,mid,high);
}
int main()
{
    vector<int>nums={25,34,12,34,23,45,34};
    int low=0;
    int high=nums.size()-1;
    mergeSort(nums,low,high);
    
    // printing the sorted array
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
}