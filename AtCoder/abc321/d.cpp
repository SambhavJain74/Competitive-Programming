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

int find_smaller_than_equal(const vector<int>& vec,int target)
{
    int start=0,end=vec.size()-1,mid;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(vec[mid]<=target)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return start;
}

int solve()
{
    int n,m,p,ans=0,count;
    cin>>n>>m>>p;
    vector<int>main(n),side(m);
    for(int i=0;i<n;i++)
    {
        cin>>main[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>side[i];
    }
    sort(all(main)),sort(all(side));
    vector<int>side_prefix={0};
    for(int i=0;i<m;i++)
    {
        side_prefix.push_back(side_prefix[i]+side[i]);
    }
    for(int i=0;i<n;i++)
    {
        count=find_smaller_than_equal(side,p-main[i]);
        ans+=side_prefix[count]+count*main[i]+(m-count)*p;
    }
    return ans;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<solve()<<"\n";
    return 0;
}