#include <iostream>
using namespace std;
class amt
{
protected:
    int x;
    public:
    void set_x(int l){
        x=l;
    }
};
class smt
{
protected:
    int y;
    public:
    void set_y(int p){
        y=p;
    }
};
class tmt:public amt,public smt
{
private:
    int z;
    public:
    void sum()
    {
        z = x + y ;
        cout << "sum =" << z<<endl;
    }
};
int main()
{
    tmt t;
    t.set_x(5);
    t.set_y(15);
    t.sum();
}
