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
    int n;
    cin>>n;
    if(n>=100)
    {
        cout<<100<<endl;
    }
    else if(n%5>=3)
    {
        cout<<5*(n/5)+5<<endl;
    }
    else
    {
        cout<<5*(n/5)<<endl;
    }
    return 0;
}