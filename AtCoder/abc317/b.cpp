#include<bits/stdc++.h>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,temp,amin=1000,amax=1;
    cin>>n;
    map<int,int>amap;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        amap[temp]++;
        amin=min(amin,temp);
        amax=max(amax,temp);
    }
    for(int i=amin;i<=amax;i++)
    {
        if(amap[i]==0)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}

