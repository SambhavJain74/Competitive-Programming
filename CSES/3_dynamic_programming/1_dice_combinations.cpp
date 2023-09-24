#include<bits/stdc++.h>
#include<algorithm>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define enter cout<<"\n"
#define endl "\n"
#define all(a) a.begin(),a.end()
#define pb push_back
#define int long long
using ll=long long;
using ull=unsigned long long;
using namespace std;

bool sortbycond(const pair<int,int>& a,const pair<int,int>& b)
{
    if(a.first!=b.first)
    {
        return (a.first<b.first);
    }
    else
    {
       return (a.second>b.second);
    }
}

const int mod=1e9+7;
int dp[1000001]={1};
bool done[1000001]={true};

int solve(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(done[n])
    {
        return dp[n];
    }
    for(int i=1;i<=6;i++)
    {
        dp[n]+=solve(n-i) ;
        dp[n]%=mod;
    }
    done[n]=true;
    return dp[n];
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    cout<<solve(n)<<"\n";
    return 0;
}