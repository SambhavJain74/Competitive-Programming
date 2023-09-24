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

void solve()
{
    int n,q,a,b;
    cin>>n>>q;
    vector<int>vec={0};
    for(int i=0;i<n;i++)
    {
        cin>>a;
        vec.push_back(vec[i]^a);
    }
    while(q--)
    {
        cin>>a>>b;
        cout<<(vec[b]^vec[a-1])<<"\n";
    }
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}