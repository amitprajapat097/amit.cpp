#include <iostream>
using namespace std;
int swap(int* a,int* b);
int main()
{
    int a,b;
    cout<<"enter a and b"<<endl;
    cin>>a>>b;
    cout<<"before swap a is "<<a<<" b is "<<b<<endl;
    swap(&a,&b);
    cout<<"after swap a is "<<a<<" b is "<<b<<endl;
}
int swap(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}