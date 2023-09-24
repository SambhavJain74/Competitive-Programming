#include<bits/stdc++.h>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;

bool isp(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

vector<vector<int>>vec={{3,4,1,2},{4,5,1,2,3},{4,5,6,1,2,3},{6,7,1,2,3,4,5}};

void solve()
{
    int n;
    cin>>n;
    if(n<=3)
    {
        cout<<-1;
        return;
    }
    int t=n/4-1,i=0;
    while(i<t)
    {
        for(auto j:vec[0])
        {
            cout<<i*4+j<<" ";
        }
        i++;
    }
    t=n-4*t;
    for(auto j:vec[t-4])
    {
        cout<<i*4+j<<" ";
    }
    return;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}