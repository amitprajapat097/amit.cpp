#include<iostream>
using namespace std;
int fibo(int n)
{
   if(n==0||n==1)
   return n;
  
 return fibo(n-1)+fibo(n-2);
   
}
int main()
{
   int n,i=0;
   cin>>n;
   int sum=0;
 while(i < n) {
      cout << " " << fibo(i);
      i++;
       sum += fibo(i);
    //    cout<<" "<<sum;
   }
   cout<<endl<<"sum of fibo upto"<<n<<"="<<sum;
}