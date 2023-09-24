#include<bits/stdc++.h>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;

void solve()
{
    int n,size,temp,res;
    bool done_once=false;
    cin>>n;
    vector<vector<int>>vec;
    for(int i=0;i<n;i++)
    {
        cin>>size;
        vec.push_back({size});
        for(int j=0;j<size;j++)
        {
            cin>>temp;
            vec[i].push_back(temp);
        }
    }
    cin>>res;
    vector<int>ans;
    int smallest;
    int i=0;
    for(;i<n;i++)
    {
        size=vec[i][0];
        for(int j=1;j<=size;j++)
        {
            if(vec[i][j]==res)
            {
                ans.push_back(i+1);
                smallest=vec[i][0];
                done_once=true;
                break;
            }
        }
        if(done_once)
        {
            break;
        }
    }
    i++;
    for(;i<n;i++)
    {
        if(vec[i][0]<=smallest)
        {
            size=vec[i][0];
            for(int j=1;j<=size;j++)
            {
                if(vec[i][j]==res)
                {
                    if(size==smallest)
                    {
                        ans.push_back(i+1);
                    }
                    else
                    {
                        ans.clear();
                        ans.push_back(i+1);
                        smallest=vec[i][0];
                    }
                }
            }
        }
    }
    size=ans.size();
    cout<<size<<endl;
    sort(ans.begin(),ans.end());
    for(int i=0;i<size;i++)
    {
        cout<<ans[i]<<" ";
    }
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}