#include<bits/stdc++.h>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;
 
int solve()
{
    int n,ans=1,mod=1e9+7;
    cin>>n;
    while(n--)
    {
        ans*=2;
        ans%=mod;
    }
    return ans;
}
 
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<solve()<<"\n";
    return 0;
}