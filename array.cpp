#include <iostream>
using namespace std;
int main()
{
    // char vowel[5];
    // for(int i=0;i<5;i++)
    // {
    //  cin>>vowel[i];
    // }
    // for(int i=0;i<5;i++)
    // {
    //  cout<<vowel[i];
    // }
    // char vow[5];
    // for(char &element:vow)
    // {
    //     cin>>element;
    // }
    // for(int i=0;i<5;i++)
    // {
    //     cout<<vow[i]<<" ";
    // }
    int a[5] ;
    int sum=0;
    cout<<"enter values";
    for(int &element:a)
    {
        cin>>element;
    }
    for(int i=0;i<5;i++)
    {
       sum+=a[i];
    }
    cout<<sum;
    
}