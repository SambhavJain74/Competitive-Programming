#include<bits/stdc++.h>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define ent cout<<"\n";
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n&1)
    {
        cout<<-1;
        return;
    }
    for(int i=0;i<n;i++)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
    for(int i=1;i<n;i++)
    {
        if(i&1)
        {
            for(int j=n-i;j>=0;j--)
            {
                cout<<j<<" ";
            }
            for(int j=n-1;j>n-i;j--)
            {
                cout<<j<<" ";
            }
        }
        else
        {
            for(int j=n-i;j<n;j++)
            {
                cout<<j<<" ";
            }
            for(int j=0;j<n-i;j++)
            {
                cout<<j<<" ";
            }            
        }
        cout<<"\n";
    }
    string first="",second="",up="";
    for(int i=1;i<=n-2;i++)
    {
        first+="R";
        second+="L";
        up+="U";
    }
    cout<<first+"RD";
    for(int i=1;i<n-1;i++)
    {
        if(i&1)
        {
            cout<<second+"D";
        }
        else
        {
            cout<<first+"D";
        }
    }
    cout<<second+"L";
    cout<<up+"U"<<"\n";
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}