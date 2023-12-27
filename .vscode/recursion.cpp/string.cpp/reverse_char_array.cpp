#include<iostream>
using namespace std;
int getlength(char name[])
{
    int count =0;
    int i=0;
    
    while(name[i]!='\0')
    {
       count++;
        i++;
    }
    return count;
}
// void reverse (char name[],int len)
// {
//    for(int i=0;i<len;i++)
//    {
//     int s=0;
//     int e= len-1;
//     while(s<e)
//     {

//     swap(name[s++],name[e--]);
//     }
//    }
//    return name[];
// }
bool checkpalindrone(char name[],int n)
{
    int s=0;
    int e=n-1;

    while(s<=e)
    {
     name[i] != 
    }
}
int main()
{
char name[20];
cout<<"enter name:"<<endl;
cin>>name;

cout<<"Name is "<<name<<endl;

int len = getlength(name);
cout<<"length: "<<len;
reverse(name,len);
cout<<endl<<"Name is "<<name<<endl;
checkpalindrone(name,len);
}