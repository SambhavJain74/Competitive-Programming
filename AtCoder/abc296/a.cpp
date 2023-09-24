#include<iostream>
using namespace std;

int main()
{
    int n;
    bool done=false;
    char temp1,temp2;
    cin>>n;
    cin>>temp1;
    int i=2;
    for(;i<=n;i++)
    {
        cin>>temp2;
        if(temp1==temp2)
        {
            done=true;
            break;
        }
        temp1=temp2;
    }
    i++;
    for(;i<=n;i++)
    {
        cin>>temp2;
    }
    if(done)
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
    }

}