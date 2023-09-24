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
    if(n==1)
    {
        cout<<1;
        return;
    }
    if(n<=3)
    {
        cout<<"NO SOLUTION";
        return;
    }
    for(int i=2;i<=n;i+=2)
    {
        cout<<i<<" ";
    }
    for(int i=1;i<=n;i+=2)
    {
        cout<<i<<" ";
    }
    return;
}
 
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}