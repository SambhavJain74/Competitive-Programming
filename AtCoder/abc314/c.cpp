#include<bits/stdc++.h>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;

void solve()
{
    int n,m,temp;
    string s;
    char curr;
    cin>>n>>m>>s;
    vector<int>vec1;
    vector<vector<int>>vec(m,vec1);
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        vec[temp-1].push_back(i);
    }
    for(int i=0;i<m;i++)
    {
        int j=vec[i].size();
        if(j==0)
        {
            continue;
        }
        curr=s[vec[i][j-1]];
        j--;
        while(j>=1)
        {
            s[vec[i][j]]=s[vec[i][j-1]];
            j--;
        }
        s[vec[i][0]]=curr;
    }
    cout<<s;
}

int32_t main()
{
    solve();
    cout<<endl;
    return 0;
}