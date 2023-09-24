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
    int t,n,k,i,curr,multiply,answer,div=1e9+7,count,last;
    string s;
    cin>>t;
    while(t--)
    {
        answer=1;
        cin>>n>>k>>s;
        count=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                count++;
                last=i;
            }
        }
        if(count%k!=0)
        {
            cout<<0<<endl;
            continue;
        }
        i=0;
        while(i<n)
        {
            curr=0;
            while(i<n)
            {
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                {
                    curr++;
                    if(curr==k)
                    {
                        i++;
                        break;
                    }
                }
                i++;
            }
            multiply=1;
            while(last!=i-1&&i<n&&!(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'))
            {
                multiply++;
                i++;
            } 
            answer*=(multiply%div);
            answer%=div;
        }
        cout<<answer<<endl;
    }
    return 0;
}