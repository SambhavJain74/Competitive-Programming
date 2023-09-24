#include<bits/stdc++.h>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;

void solve()
{
    int n;
    string s;
    cin>>n>>s;
    int i=0;
    while(s[i]=='0')
    {
        cout<<0;
        i++;
    }
    if(i<=n-2)
    {
        cout<<1;
        i++;
        while(i<n)
        {
            cout<<0;
            i++;
        }
        return;
    }
    else
    {
        cout<<s.substr(i);
    }
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
        cout<<endl;
    }
    return 0;
}