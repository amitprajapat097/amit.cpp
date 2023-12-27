// #include<iostream>
// using namespace sdt;
#include <iostream>
using namespace std;
void fun(int n)
{
    // base case
    if(n==0)
    return;

    cout<<"before"<<endl;
cout<<n<<endl;
    // R R
    fun(n-1);
    
    cout<<"after"<<endl;
}
int main()
{
    fun(5);
}