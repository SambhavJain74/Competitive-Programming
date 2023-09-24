#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,q,x,t,index=0,casea=0;
    string s,change="";
    char c;
    cin>>n>>s>>q;
    vector<int>vec;
    for(int i=0;i<q;i++)
    {
        cin>>t>>x>>c;
        if(t==1)
        {
            vec.push_back(x);
            change+=c;
        }
        else
        {
            casea=t;
            index=vec.size();
        }
    }
    q=vec.size();
    for(int i=0;i<index;i++)
    {
        s[vec[i]-1]=change[i];
    }
    if(casea==2)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]<='Z')
            {
                s[i]=(char)(s[i]+'z'-'Z');
            }
        }
    }
    else if(casea==3)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]>'Z')
            {
                s[i]=(char)(s[i]+'Z'-'z');
            }
        }
    }  
    for(int i=index;i<q;i++)
    {
        s[vec[i]-1]=change[i];
    }
    cout<<s;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}