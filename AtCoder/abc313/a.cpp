#include<bits/stdc++.h>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;

int solve()
{
    int n,first,pmax,temp;
    cin>>n;
    cin>>first;
    if(n==1)
    {
        return 0;
    }
    cin>>pmax;
    for(int i=2;i<n;i++)
    {
        cin>>temp;
        pmax=max(pmax,temp);
    }
    if(pmax<first)
    {
        return 0;
    }
    return pmax-first+1;
}

int32_t main()
{
    cout<<solve()<<endl;
    return 0;
}