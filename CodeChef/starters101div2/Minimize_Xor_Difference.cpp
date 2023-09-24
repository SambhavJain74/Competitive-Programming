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
    int a,b,ans;
    bitset<31>avec,bvec,bans;
    avec.reset(),bvec.reset(),bans.reset();
    cin>>a>>b;
    if(a==b)
    {
        return 0;
    }
    else if(b<a)
    {
        b+=a;
        a=b-a;
        b-=a;
    }
    int i=0;
    while(a)
    {
        avec[i]=a&1;
        a>>=1;
        i++;
    }
    i=0;
    while(b)
    {
        bvec[i]=b&1;
        b>>=1;
        i++;
    }
    for(i=30;i>=0;i--)
    {
        if(bvec[i]!=avec[i])
        {
            bans[i]=!bvec[i];
            i--;
            break;
        }
    }
    for(;i>=0;i--)
    {
        bans[i]=!avec[i];
    }
    ans=bans.to_ullong();
    bans.reset();
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