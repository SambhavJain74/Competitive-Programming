#include<bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;
 
bool solve()
{
    int a,b;
    cin>>a>>b;
    int t=2*(min(a,b))-max(a,b);
    if(t<0||t%3)
    {
        return false;
    }
    return true;
}
 
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve()?yes:no;
    }
    return 0;
}