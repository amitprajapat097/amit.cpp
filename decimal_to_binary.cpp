#include <iostream>
using namespace std;
int main()
{
int decimal;
cout<<"enter a decimal value:";
cin>>decimal;
int parity,power=1,binary=0;
while(decimal>0)
{
  parity=decimal%2;
  binary=parity*power;
  power*=2;
  decimal/=2;
cout<<binary;
}
}