#include<bits/stdc++.h>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;

int solve()
{
    int n,a,total=0,inc=0,dec=0;
    cin>>n;
    vector<int>vec(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
        total+=vec[i];
    }
    if(n==1)
    {
        return 0;
    }
    a=(total-1)/n;
    for(int i=0;i<n;i++)
    {
        if(a>=vec[i])
        {
            inc+=a-vec[i];
        }
        else
        {
            dec+=vec[i]-a-1;
        }
    }
    return max(inc,dec);
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<solve()<<endl;
    return 0;
}