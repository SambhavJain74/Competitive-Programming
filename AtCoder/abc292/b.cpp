#include<iostream>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    int arr[n][2]={0,0};              // yellow, red, index=number-1
    int temp1,x;
    for(int i=0;i<q;i++)
    {
        cin>>temp1>>x;
        if(temp1==1)
        {
            arr[x-1][0]++;
        }
        else if(temp1==2)
        {
            arr[x-1][1]++;
        }
        else
        {
            if(arr[x-1][0]>=2||arr[x-1][1]>=1)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}