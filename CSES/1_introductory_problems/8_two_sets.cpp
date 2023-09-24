#include<bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;
 
void solve()
{
    int n,i=0,sum=0;
    cin>>n;
    int total=(n+1)*n/2;
    if(total&1)
    {
        no;
        return;
    }
    yes;
    total/=2;
    vector<int>first,second;
    while(sum<=total)
    {
        first.push_back(++i);
        sum+=i;
    }
    first.erase(first.begin()+sum-total-1);
    second.push_back(sum-total);
    for(;++i<=n;)
    {
        second.push_back(i);
    }
    cout<<first.size()<<"\n";
    for(i=first.size()-1;i>=0;i--)
    {
        cout<<first[i]<<" ";
    }
    cout<<"\n"<<second.size()<<"\n";
    for(i=second.size()-1;i>=0;i--)
    {
        cout<<second[i]<<" ";
    }
}
 
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}