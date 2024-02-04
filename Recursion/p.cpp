#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;

    int per=(a+b+c+d+e)/5;

    if(per>=80)
    cout<<"A";

    else if(per>=60)
    cout<<"B";

    else
    cout<<"c";
}