#include<bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,a,b,count=0;
    cin>>n>>m;
    int arr[n][n]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=0;
        }
    }
    for(int i=1;i<=m;i++)
    {
        cin>>a;
        for(int j=2;j<=n;j++)
        {
            cin>>b;
            arr[a-1][b-1]=1;
            arr[b-1][a-1]=1;
            a=b;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==0)
            {
                count++;
            }
        }
    }
    cout<<(count-n)/2<<endl;
    return 0;
}