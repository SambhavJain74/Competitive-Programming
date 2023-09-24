#include<bits/stdc++.h>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    bool answer=true;
    string s,t;
    cin>>n>>s>>t;
    for(int i=0;i<n;i++)
    {
        if(!(s[i]==t[i]||s[i]=='1'&&t[i]=='l'||s[i]=='l'&&t[i]=='1'||s[i]=='o'&&t[i]=='0'||s[i]=='0'&&t[i]=='o'))
        {
            answer=false;
            break;
        }
    }
    (answer)?yes:no;
    return 0;
}