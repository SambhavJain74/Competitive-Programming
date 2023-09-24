#include<bits/stdc++.h>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;

int solve()
{
    int n,f,s;
    cin>>n;
    vector<pair<int,int>>vec;
    for(int i=0;i<n;i++)
    {
        cin>>f>>s;
        vec.push_back({f,s});
    }
    sort(vec.begin(),vec.end());
    vector<pair<int,int>>ans;
    int answer=0;
    int firstmax=0,secondmax=0;
    for(int i=0;i<n;i++)
    {
        int first=vec[i].second,second=0,curr=vec[i].first;
        while(i<n-1&&vec[i+1].first==curr)
        {
            i++;
            if(vec[i].second>first)
            {
                second=first;
                first=vec[i].second;
            }
            else if(vec[i].second>second)
            {
                second=vec[i].second;
            }
        }  
        ans.push_back({first,second});
        answer=max(answer,first+second/2);
        if(first>firstmax)
        {
            secondmax=firstmax;
            firstmax=first;
        }
        else if(first>secondmax)
        {
            secondmax=first;
        }
    }
    if(ans.size()==1)
    {
        return answer;
    }
    return max(answer,firstmax+secondmax);
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<solve()<<endl;
    return 0;
}