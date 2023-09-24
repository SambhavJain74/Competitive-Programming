#include<iostream>
#include<cmath>
using namespace std;

int cntdiv(int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i)
                cnt++;
 
            else // Otherwise count both
                cnt = cnt + 2;
        }
    }
    return cnt;
}

int main()
{
    int n;
    cin>>n;
    long long answer=0;
    for(int i=1,j=n-1;i<j;i++,j--)
    {
        answer+=cntdiv(i)*cntdiv(j)*2;
    }
    if(n%2==0)
    {
        answer+=pow(cntdiv(n/2),2);
    }
    cout<<answer;
}