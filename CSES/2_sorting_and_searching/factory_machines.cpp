#include<iostream>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    int *arr=new int[n];
    double sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=1/arr[i];
    }
    for(int i=int(t/sum);;i++)
    {
        int no_of_prods=0;
        for(int j=0;j<n;j++)
        {
            no_of_prods+=i/arr[j];
        }
        if(no_of_prods==t)
        {
            cout<<i<<endl;
            break;
        }
    }
}