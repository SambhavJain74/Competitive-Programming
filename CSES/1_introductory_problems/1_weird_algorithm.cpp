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
    while(n!=1)
    {
        cout<<n<<" ";
        if(n&1)
        {
            n=n*3+1;
        }
        else
        {
            n/=2;
        }
    }
    cout<<n;
    return;
}
 
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}