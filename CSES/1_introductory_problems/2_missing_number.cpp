#include<bits/stdc++.h>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;
 
int solve()
{
    int n,temp;
    cin>>n;
    vector<bool>vec(n,false);
    for(int i=0;i<n-1;i++)
    {
        cin>>temp;
        vec[temp-1]=true;
    }
    for(int i=0;i<n;i++)
    {
        if(!vec[i])
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
    cout<<solve()<<"\n";
    return 0;
}