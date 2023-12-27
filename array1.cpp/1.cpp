#include<iostream>
using namespace std;
binary_search(int array[],int n,int key){
    int start=0;
    int end=n;
    while(end<=n)
    {
     int mid =(start+end)/2;
     if(array[mid]==key){
        return mid;
     } 
     else if(array[mid]>key){
        end=mid-1;
     }
     else(array[mid]<key){
       start=mid+1;
     }
    }
}
int main(){
    int n;
    cin>>n;
    int array[n];
    int key;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<< binary_search(array,n,key);
}