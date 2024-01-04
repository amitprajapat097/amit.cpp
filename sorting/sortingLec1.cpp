// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
void printLL(vector<int>a)
{
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }cout<<endl;
}
vector<int> SelectionSort(vector<int> arr)
{
    int n=arr.size();
    
    for(int i=0;i<n;i++)
    {
        int mini=i;
        
        for( int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[mini]) 
            {
              mini=j;  
            }   
        }
        int temp=arr[i];
        arr[i]=arr[mini];
        arr[mini]=temp;
    }return arr;
}
vector<int> BuubleSort(vector<int>arr)
{
    int n=arr.size();
    
    for(int i=n;i>0;i--)
    {
        int swap=0;
        for(int j=0;j<n;j++)
        {
            
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=1;
            }
        }cout<<"runs\n";
        if(swap==0)break;
    } return arr;
}
int main() {
    vector<int>arr={2,3,4,5,6,7};
    vector<int>a=SelectionSort(arr);
    vector<int>b=BuubleSort(arr);
    printLL(b);
}