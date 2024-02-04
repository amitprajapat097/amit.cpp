#include<iostream>
using namespace std;
void path(int &s,int &e,int x,int y,int &c)
{
    c++;
    if(s==x && e==y)
    {
      cout<<"0";
      return;
    }
    if(s>x && e>y && s>y && e>x)
    cout<<"-1";
    return;
      
    path(s+c,e,x,y,c);
    path(s,e+c,x,y,c);

    

}
int main()
{
   int x=3;
   int y=2;
   int s=0;
   int e=0;
   int c=0;

   path(s,e,x,y,c);
}