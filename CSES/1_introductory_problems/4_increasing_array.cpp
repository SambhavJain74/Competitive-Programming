#include<bits/stdc++.h>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;
 
int solve()
{
    int n,curr,prev,ans=0;
    cin>>n;
    cin>>prev;
    for(int i=1;i<n;i++)
    {
        cin>>curr;
        if(curr<prev)
        {
            ans+=prev-curr;
        }
        else
        {
            prev=curr;
        }
    }
    return ans;
}
 
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<solve();
    return 0;
}