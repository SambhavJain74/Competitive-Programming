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
    cin>>n;
    if(n&1)
    {
        cout<<2<<" "<<2<<" "<<(n-4)<<"\n";
        return;
    }
    cout<<2<<" "<<(n-2)/2<<" "<<(n-2)/2<<"\n";
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
    }
    return 0;
}