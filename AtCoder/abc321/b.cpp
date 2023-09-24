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

int solve()
{
    int n,x,sum=0,amin=100,amax=0;
    cin>>n>>x;
    vector<int>vec(n-1);
    for(int i=0;i<n-1;i++)
    {
        cin>>vec[i];
        sum+=vec[i];
        amin=min(amin,vec[i]);
        amax=max(amax,vec[i]);
    }
    if(sum-amax>=x)
    {
        return 0;
    }
    if(sum-amin<x)
    {
        return -1;
    }
    return (x-(sum-amin-amax));
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<solve()<<"\n";
    return 0;
}