#include<iostream> 
#include<cmath>
using namespace std;
int main(){
    long double a,b;
    cin>>a>>b;
    cout.precision(15);
    if(sqrt(3)*max(a,b)<=2*min(a,b)){
    cout<<2*sqrt(a*a+b*b-a*b*sqrt(3));
    }
    else{
    cout<<2*min(a,b)/sqrt(3);
    }
    return 0;
}