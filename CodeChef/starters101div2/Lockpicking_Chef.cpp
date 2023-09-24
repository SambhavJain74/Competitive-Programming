#include<bits/stdc++.h>
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

int solve()
{
    int n,m,ans=LONG_LONG_MAX,curr;
    string s,k;
    cin>>n>>m>>s>>k;
    for(int i=0;i<=n-m;i++)
    {
        curr=0;
        for(int j=0;j<m;j++)
        {
            curr+=min(abs(s[i+j]-k[j]),10-abs(s[i+j]-k[j]));
        }
        if(curr==0)
        {
            return 0;
        }
        ans=min(ans,curr);
    }
    return ans;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        cout<<solve()<<"\n";
    }
    return 0;
}