#include<iostream>
using namespace std;
class vehicle{
    public:
    vehicle(){
        cout<<"vehicle"<<endl;
    }
};
class car:public vehicle{
   public:
    car(){
        cout<<"car"<<endl;
    }
};
class racing{
   public:
    racing(){
        cout<<"racing"<<endl;
    }
};
class farrari:public racing,public car{
   public:
    farrari(){
        cout<<"farrari"<<endl;
    }
};
int main(){
    farrari f1;

}