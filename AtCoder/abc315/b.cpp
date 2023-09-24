#include<bits/stdc++.h>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;

void solve()
{
    int m,total;
    cin>>m;
    vector<int>vec(m,0);
    cin>>vec[0];
    total=vec[0];
    for(int i=1;i<m;i++)
    {
        cin>>vec[i];
        vec[i]+=vec[i-1];
    }
    total=vec[m-1]/2+1;
    if(m==1)
    {
        cout<<1<<" "<<total<<endl;
        return;
    }
    int a=0,b;
    while(a<m&&vec[a]<total)
    {
        a++;
    }
    if(a==0)
    {
        cout<<1<<" "<<total<<endl;
        return;
    }
    b=total-vec[a-1];
    cout<<a+1<<" "<<b<<endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}