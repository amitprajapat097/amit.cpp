#include <iostream>
using namespace std;
class amt
{
protected:
    int x;
    
};
class smt:public amt
{
protected:
    int y;
    public:
    void set(int p,int l){
        y=p;
        x=l;
    }
};
class wmt{
    protected:
    int v;
    public:
    void square(int c){
        v=c;
        v*=v;
        cout<<"square of v ="<<v<<endl;
    }
};
class tmt:public smt,public wmt
{
private:
    int z;
    public:
    void sum()
    {
        z = x + y ;
        cout << "sum=" << z<<endl;
        cout<<"x="<<x<<" "<<" y ="<<y<<endl;
    }
};
int main()
{
    tmt t;
    t.set(4,6);
    t.sum();
    t.square(4);
}