#include<bits/stdc++.h>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;

void solve()
{
    int n;
    cin>>n;
    bool done;
    for(int i=0;i<=n;i++)
    {
        done =false;
        for(int j=1;j<=9;j++)
        {
            if(n%j==0&&i%(n/j)==0)
            {
                cout<<j;
                done=true;
                break;
            }
        }
        if(!done)
        {
            cout<<"-";
        }
    }
    return;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}

