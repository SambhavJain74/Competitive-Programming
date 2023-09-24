#include<bits/stdc++.h>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;

bool solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    return (b+d>a+c)?true:false;
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