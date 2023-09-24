#include<bits/stdc++.h>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;
 
void solve()
{
    int n,range,div,pos;
    cin>>n;
    range=pow(2,n);
    string s(n,'0');
    cout<<s<<"\n";
    for(int i=1;i<range;i++)
    {
        div=1;
        pos=n-1;
        while(i%(div*2)==0)
        {
            div*=2;
            pos--;
        }            
        s[pos]=(s[pos]=='0')?'1':'0';
        cout<<s<<"\n";
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