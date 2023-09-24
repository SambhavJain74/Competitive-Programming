#include<bits/stdc++.h>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;
 
int solve(int n)
{
    //int att=(2*4+3*8+4*((n-4)*4+4)+6*4*(n-4)+8*(n-4)*(n-4))/2;
    //int att=(8*n*n-24*n+16)/2;
    //int att=4*n*n-12*n+8;
    return (n*n)*(n*n-1)/2-(4*n*n-12*n+8);
}
 
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<solve(i)<<"\n";
    }
    return 0;
}