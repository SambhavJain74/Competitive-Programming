#include<bits/stdc++.h>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;

void solve()
{
    int n,x,y,p,t,Q,q;
    cin>>n>>x>>y;
    int mod=3*5*7*8;
    vector<pair<int,int>>vec;
    for(int i=0;i<n-1;i++)
    {
        cin>>p>>t;
        vec.push_back({p,t});
    }
    vector<int>ans;
    for(int i=0;i<mod;i++)
    {
        int curr=i;
        for(int j=0;j<n-1;j++)
        {
            if(curr%vec[j].first!=0)
            {
                curr+=vec[j].first-curr%vec[j].first;
            }
            curr+=vec[j].second;
        }
        ans.push_back(curr+y-i);
    }
    cin>>Q;
    while(Q--)
    {
        cin>>q;
        cout<<q+x+ans[(q+x)%mod]<<"\n";
    }
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}

