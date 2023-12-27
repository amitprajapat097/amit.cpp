#include <iostream>
using namespace std;
int main()
{
  int binary;
  int last_digit,decimal=0,power=1;
  cout<<"enter binary number:";
  cin>>binary;
  while(binary>0)
  {
     last_digit=binary%10;
     decimal+=last_digit*power;
     power*=2;
     binary/=10;
  }
  cout<<decimal;
}