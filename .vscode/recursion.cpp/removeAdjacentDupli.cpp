// #include<iostream>
// using namespace std;
// string removeDupli(string s)
// {
//     // base case
//     if(s.length()==1 || s.length()==0)
//     {
//         return s;
//     }

//     // small work
//     if(s[0]==s[1])
//     {
//         return (s[0]+removeDupli(s.substr(2)));
//     }

//     return (s[0]+removeDupli(s.substr(1)));
// }
// int main()
// {
//     cout<<removeDupli("aaabbssdhsstyee");
// }


#include <iostream>
using namespace std;
string  removeDupli(string s)
{
    if(s.length()==0)
    {
        return "";
    }

    char ch=s[0];
    string ans= removeDupli(s.substr(1));
    if(ch==ans[0])
    {
        return ans;
    }

    return (ch+ans);
}
int main()
{
    string s;
    cin>>s;
   cout<<removeDupli(s) ;
}
