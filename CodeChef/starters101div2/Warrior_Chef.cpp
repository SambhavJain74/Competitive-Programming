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
    int n,h,temp,total=0,x=0;
    cin>>n>>h;
    vector<int>vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
        total+=vec[i];
    }
    sort(all(vec));
    for(int i=n-1;i>=0;i--)
    {
        h-=vec[i];
        if(h<=0)
        {
            h+=vec[i];
            x=vec[i];
            break;
        }
    }
    return x;
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