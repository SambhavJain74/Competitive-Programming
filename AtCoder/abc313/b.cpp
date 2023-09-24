#include<bits/stdc++.h>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;

int solve()
{
    int n,m,a,b,curr;
    cin>>n>>m;
    curr=n;
    vector<bool>vec(n,true);
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        if(vec[b-1])
        {
            curr--;
            vec[b-1]=false;
        }
    }
    if(curr!=1)
    {
        return -1;
    }
    for(int i=0;i<n;i++)
    {
        if(vec[i])
        {
            return i+1;
        }
    }
    return -1;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<solve()<<endl;
    return 0;
}