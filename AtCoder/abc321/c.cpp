#include<bits/stdc++.h>
#include<algorithm>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define enter cout<<"\n"
#define endl "\n"
#define all(a) a.begin(),a.end()
#define pb push_back
#define int long long
using ll=long long;
using ull=unsigned long long;
using namespace std;

bool sortbycond(const pair<int,int>& a,const pair<int,int>& b)
{
    if(a.first!=b.first)
    {
        return (a.first<b.first);
    }
    else
    {
       return (a.second>b.second);
    }
}

vector<int>vec={1,2,3,4,5,6,7,8,9};

void generate()
{
    int start=0,end=vec.size()-1;
    for(int add=1;add<=9;add++)
    {
        for(int i=start;i<=end;i++)
        {
            //cout<<vec[i]<<"\n";
            for(int j=0;j<vec[i]%10;j++)
            {
                vec.push_back(vec[i]*10+j);
                //cout<<vec.size()<<" "<<vec[vec.size()-1]<<"\n";
            }
        }
        start=end+1;
        end=vec.size()-1;
    }
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    generate();
    int n;
    cin>>n;
    cout<<vec[n-1]<<"\n";
    return 0;
}