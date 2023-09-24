#include<bits/stdc++.h>
#include<algorithm>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define enter cout<<"\n"
#define endl "\n"
#define all(a) a.begin(),a.end()
#define pb push_back
#define int long long
using ll=long long;
using ull=unsigned long long;
using namespace std;

bool sortbycond(const pair<int,int>& a,const pair<int,int>& b)
{
    if(a.first!=b.first)
    {
        return (a.first<b.first);
    }
    else
    {
       return (a.second>b.second);
    }
}

bool solve()
{
    int n;
    cin>>n;
    vector<int>vec;
    while(n)
    {
        vec.push_back(n%10);
        n/=10;
    }
    for(int i=0;i<vec.size()-1;i++)
    {
        if(vec[i]>=vec[i+1])
        {
            return false;
        }
    }
    return true;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve()?yes:no;
    return 0;
}