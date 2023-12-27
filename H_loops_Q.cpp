// sum of series of A.P
#include <iostream>
using namespace std;
int main()
{
    int a, d, n;
    cout << "enter a ";
    cin >> a;
    int terms=a;
    int sum=0;
    cout << "enter d ";
    cin >> d;
    cout << "enter n ";
    cin >> n;
    cout<<"series:"<<endl;
    for (int i = 1; i <= n; i++)
    {
        cout <<terms<<"  ";
        terms += d;
    }
   cout<<endl<<"sum:"<<endl;
 for(int i=1;i<=n;i++)
 {
    sum+=a+d;

 }
 cout<<sum;
}