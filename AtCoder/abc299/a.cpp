#include<iostream>
#include<bits/stdc++.h>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;

int main()
{
    int n,temp,first,second,third;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='|')
        {
            first=i;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='*')
        {
            second=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='|')
        {
            third=i;
            break;
        }
    }
    if(first<second&&second<third)
    {
        cout<<"in"<<endl;
    }
    else
    {
        cout<<"out"<<endl;
    }
    return 0;
}