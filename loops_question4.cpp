// print factorial of given number
#include <iostream>
using namespace std;
int main()
{
    int n;
    int factorial=1;
    cout<<"enter number:";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        factorial*=i;
        
    cout<<factorial<<endl;
    }
    
}