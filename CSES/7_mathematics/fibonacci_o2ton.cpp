#include<iostream>
using namespace std;

int nth_fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int mod=1e9+7;
    return (nth_fibonacci(n-1)+nth_fibonacci(n-2))%mod;
}
    
int main()
{
    long long n;
    cin>>n;
    cout<<nth_fibonacci(n)<<endl;
    return 0;
}