// mamoization
#include<iostream>
using namespace std;
#include<vector>
int stair(int n,vector<int>&dp)
{
    if(n==0)return 1;
    if(n<=2)return n;
    if(dp[n]!=-1)return dp[n];
    return dp[n]= stair(n-1,dp)+stair(n-2,dp);
}
int main()
{
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<stair(n,dp);
    // 10946
}



// tabulation
#include<iostream>
using namespace std;
#include<vector>
int stair(int n,vector<int>&dp)
{
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }return dp[n];
}
int main()
{
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<stair(n,dp);
    // 10946
}