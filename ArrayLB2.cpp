#include<iostream>
using namespace std;
void printarray(char ch[],int v)
{
    for(int i=0;i<v;i++)
    {
        cout<<ch[i]<<" ";
    }cout<<endl;
}
 char reversearray(char num[],int size)
 {
    int start = 0;
    int end = (size - 1);
    while (start <= end)
    {
        swap(num[start], num[end]);
        start++, end--;
    }
    // for (int i = 0; i < size; i++)
    // {
    //     cout << num[i]<<" ";
    // }
    // cout << endl;
    return num[4];
 }
int main()
{
    char arr[]="NAMA";
    cout<<"Before reverse:"<<endl;
    printarray(arr,4);
    cout<<"after reverse:"<<endl;
    char name = reversearray(arr,4);
    cout<<name;
}