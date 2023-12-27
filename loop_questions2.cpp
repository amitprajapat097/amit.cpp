// print the number of digits in a given number
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number:"<<endl;
    cin>>n;
    int digits=0;
    while (n>0)
    {
        digits++;
        n=n/10;
    }
    cout<<digits;
    
}