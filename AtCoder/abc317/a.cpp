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
    int n,h,x,index,curr=INT32_MAX,temp;
    cin>>n>>h>>x;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(h+temp>=x&&temp<curr)
        {
            index=i+1;
            curr=temp;
        }
    }
    cout<<index<<endl;
    return 0;
}

