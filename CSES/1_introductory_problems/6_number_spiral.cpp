#include<bits/stdc++.h>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define endl "\n"
#define ull unsigned long long
#define int long long
using ll=long long;
using namespace std;
 
int solve()
{
    int x,y;
    cin>>y>>x;
    if(y>=x)
    {
        if(y&1)
        {
            return (y-1)*(y-1)+x;
        }
        return y*y-x+1;
    }
    if(x&1)
    {
        return x*x-(y-1);
    } 
    return (x-1)*(x-1)+y;
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