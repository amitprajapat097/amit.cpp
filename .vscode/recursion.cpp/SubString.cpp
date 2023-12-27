#include<iostream>
using namespace std;
void SubString(string s,string ans)
{
  if(s.length()==0)
  {
    cout<<ans<<endl;
  }

  char ch=s[0];
  string ros=s.substr(1);
  SubString(ros,ans);
  SubString(ros,ans+ch);
}
int main()
{
string s;
string ans="";
cin>>s;
SubString(s,ans);
}