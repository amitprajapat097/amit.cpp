// print a raise to power b
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter number a and b:"<<endl;
    cin>>a>>b;
    int result=1;
    for(int i=1;i<=b;i++)
    {
       result*=a;
    }
       cout<<result; 
}