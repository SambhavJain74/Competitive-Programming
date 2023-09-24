#include<bits/stdc++.h>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;
 
void solve(int n,int a,int b,int c)
{
    if(n==1)
    {
        cout<<a<<" "<<c<<"\n";
        return;
    }
    solve(n-1,a,c,b);
    cout<<a<<" "<<c<<"\n";
    solve(n-1,b,a,c);
}
 
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    cout<<pow(2,n)-1<<"\n";
    solve(n,1,2,3);
    return 0;
}