#include<iostream>
#include<cmath>
using namespace std;

int nth_fibonacci(long long n)
{
    int mod=1e9+7;
    long long fn;
    if(n%2==0)
    {
        fn=floor(pow((1+sqrt(5))/2,n)/sqrt(5));
    }
    else
    {
        fn=ceil(pow((1+sqrt(5))/2,n))/sqrt(5);
    }
    return (fn%mod);
}

int main()
{
    long long n;
    cin>>n;
    cout<<nth_fibonacci(n)<<endl;
    return 0;
}