#include <iostream>
using namespace std;

void Replace(string s)
{

    for (char &c:s)
    {
        if(c==' ')
        {
            //  c='@';
             cout<<"@40";

        }
        else
        {
           cout<<c;
        }
    }
}
int main()
{
    // cout<<"hello"<<endl;
    string s="amit here";
    // cout<<"enter str"<<endl;
    // cin>>s;
//    cout<<s.length()<<endl;
//    s[4]='@';
    Replace(s);
    return 0;
}