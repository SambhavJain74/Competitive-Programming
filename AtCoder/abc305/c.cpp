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
    int h,w,a,b;
    cin>>h>>w;
    char arr[500][500];
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<h-1;i++)
    {
        for(int j=0;j<w-1;j++)
        {
            if(arr[i][j]=='.'&&arr[i+1][j]=='#'&&arr[i][j+1]=='#')
            {
                a=i+1,b=j+1;
                cout<<a<<" "<<b<<endl;
                return 0;
            }
        }
    }
    for(int i=0;i<h-1;i++)
    {
        for(int j=1;j<w;j++)
        {
            if(arr[i][j]=='.'&&arr[i+1][j]=='#'&&arr[i][j-1]=='#')
            {
                a=i+1,b=j+1;
                cout<<a<<" "<<b<<endl;
                return 0;
            }
        }
    }
    for(int i=1;i<h;i++)
    {
        for(int j=0;j<w-1;j++)
        {
            if(arr[i][j]=='.'&&arr[i-1][j]=='#'&&arr[i][j+1]=='#')
            {
                a=i+1,b=j+1;
                cout<<a<<" "<<b<<endl;
                return 0;
            }
        }
    }
    for(int i=1;i<h;i++)
    {
        for(int j=1;j<w;j++)
        {
            if(arr[i][j]=='.'&&arr[i-1][j]=='#'&&arr[i][j-1]=='#')
            {
                a=i+1,b=j+1;
                cout<<a<<" "<<b<<endl;
                return 0;
            }
        }
    }
    return 0;
}