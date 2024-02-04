#include<iostream>
using namespace std;
void toh(int n,string src,string dest ,string help)
{
    if(n==1)
    return;

    toh(n-1,src,help,dest);
    cout<<"Move"<<n<<"from"<<src<<"to"<<dest;
    toh(n-1,help,dest,src);
}
int main()
{
    int n=3;
    string src,dest,help;
    toh(n,src,dest,help);
}