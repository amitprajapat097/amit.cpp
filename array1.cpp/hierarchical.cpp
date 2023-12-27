#include <iostream>
using namespace std;
class amt
{
protected:
    int x;
};
class smt : public amt
{

public:
    void square(int l)
    {
        x = l;
        x *= x;
        cout <<"square="<<x<<endl;
    }
};
class tmt:public amt{
    public:
    void cube(int r){
        int cub;
        x=r;
        cub=x*x*x;
        cout<<"cube="<<cub<<endl;
        
    }
};
int main(){
smt t;
tmt f;
f.cube(2);
t.square(2);
} 