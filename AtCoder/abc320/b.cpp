#include<bits/stdc++.h>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;

bool is_pal(string s)
{
    for(int i=0,j=s.size()-1;i<j;i++,j--)
    {
        if(s[i]!=s[j])
        {
            return false;
        }
    }
    return true;
}

int solve()
{
    string s;
    cin>>s;
    int n=s.size();
    for(int i=n;i>=2;i--)
    {
        for(int j=0;j<=n-i;j++)
        {
            if(is_pal(s.substr(j,i)))
            {
                return i;
            }
        }
    }
    return 1;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<solve()<<"\n";
    return 0;
}