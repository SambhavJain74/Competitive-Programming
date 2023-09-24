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
    int t,n,a,b,curr;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int *om=new int[n];
        int *addy=new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>om[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>addy[i];
        }
        int i=0;
        a=0,b=0;
        while(i<n)
        {
            curr=1;
            while(om[i]>0&&i<n)
            {
                i++;
                curr++;
            }
            a=max(a,curr);
            i++;
        }
        i=0;
        while(i<n)
        {
            curr=1;
            while(addy[i]>0&&i<n)
            {
                i++;
                curr++;
            }
            b=max(b,curr);
            i++;
        }
        if(a>b)
        {
            cout<<"Om"<<endl;
        }
        else if(a==b)
        {
            cout<<"Draw"<<endl;
        }
        else
        {
            cout<<"Addy"<<endl;
        }

        delete []om;
        delete []addy;
    }
    return 0;
}