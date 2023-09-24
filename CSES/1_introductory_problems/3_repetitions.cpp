#include<bits/stdc++.h>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;
 
int solve()
{
    int n,curr,ans=0;
    string s;
    cin>>s;
    n=s.size();
    int i=0;
    while(i<n)
    {
        curr=1;
        while(i<n-1&&s[i]==s[i+1])
        {
            curr++;
            i++;
        }
        i++;
        ans=max(ans,curr);
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