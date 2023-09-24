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
    char p,q;
    int a,b;
    cin>>p>>q;
    if(p=='A')
    {
        a=0;
    }
    else if(p=='B')
    {
        a=3;
    }
    else if(p=='C')
    {
        a=4;
    }
    else if(p=='D')
    {
        a=8;
    }
    else if(p=='E')
    {
        a=9;
    }
    else if(p=='F')
    {
        a=14;
    }
    else
    {
        a=23;
    }
    if(q=='A')
    {
        b=0;
    }
    else if(q=='B')
    {
        b=3;
    }
    else if(q=='C')
    {
        b=4;
    }
    else if(q=='D')
    {
        b=8;
    }
    else if(q=='E')
    {
        b=9;
    }
    else if(q=='F')
    {
        b=14;
    }
    else
    {
        b=23;
    }
    cout<<abs(a-b)<<endl;
    return 0;
}