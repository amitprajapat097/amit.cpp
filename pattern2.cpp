#include <iostream>
using namespace std;
int getmax(int arr[], int n)
{
    int max=INT16_MIN;
   for(int i=0;i<n;i++)
   {
    if(arr[i]>max)
    {
        max=arr[i];
    }
   }
}
void printarray(char arr[], int size){
    for(int j=0;j<size;j++)
    {
        cout<<arr[j]<<" ";
    }
}
int main()
{
    int n=5;
    char arrr[5]={'a','s','d','f','r'};
   printarray(arrr,5);
}