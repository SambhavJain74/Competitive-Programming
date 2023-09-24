#include<bits/stdc++.h>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;
 
string solve()
{
    string s;
    int n,odd_count=0;
    vector<int>vec(26,0);
    cin>>s;
    n=s.size();
    for(int i=0;i<n;i++)
    {
        vec[s[i]-'A']++;
    }
    for(int i=0;i<26;i++)
    {
        if(vec[i]&1)
        {
            odd_count++;
            s[n/2]=(char)(i+'A');
            vec[i]--;
        }
    }
    if(odd_count>1)
    {
        return "NO SOLUTION";
    }
    int j=0;
    for(int i=0;i<26;i++)
    {
        while(vec[i])
        {
            s[j]=(char)(i+'A');
            s[n-j-1]=(char)(i+'A');;
            vec[i]-=2;
            j++;
        }
    }
    return s;
}
 
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<solve()<<"\n";
    return 0;
}