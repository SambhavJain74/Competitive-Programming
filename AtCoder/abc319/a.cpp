#include<bits/stdc++.h>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define endl "\n"
#define int long long
using ll=long long;
using namespace std;

int solve()
{
    string s;
    cin>>s;
    vector<pair<string,int>>vec={{"tourist",3858},{"ksun48" ,3679},{"Benq" ,3658},
{"Um_nik" ,3648},
{"apiad" ,3638},
{"Stonefeang" ,3630},
{"ecnerwala" ,3613},
{"mnbvmar" ,3555},
{"newbiedmy", 3516},
{"semiexp" ,3481}};
    for(int i=0;i<10;i++)
    {
        if(vec[i].first==s)
        {
            return vec[i].second;
        }
    }
    return -1;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<solve()<<"\n";
    return 0;
}

