// print sum of n numbers
#include <iostream>
using namespace std;
int main()
{
 int sum, n;
 sum=0;
 cout<<"enter n"<<endl;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
   sum+=i;
 }
 cout<<sum;
}
