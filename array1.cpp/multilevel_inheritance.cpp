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
class tmt:public smt
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
}
