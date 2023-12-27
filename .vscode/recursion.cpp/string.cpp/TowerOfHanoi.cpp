#include<iostream>
using namespace std;
void TowerOfHanoi(int n,string src,string helper,string dest)
{
    // Base case
    if(n==1){
    cout<<"transfer "<<n<<" from "<<src<<" to "<<dest<<endl;
    return;
    }

    TowerOfHanoi(n-1,src,dest,helper);
    cout<<"transfer "<<n-1<<" from"<<src<<" to "<< helper<<endl;
    
    TowerOfHanoi(n-1,helper,src,dest); 
    cout<<"transfer "<<n-1<<" from "<<helper<<" to "<< dest<<endl;
}
int main()
{
    int n;
    cin>>n;
    TowerOfHanoi(n,"S","H","D");
}