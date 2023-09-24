#include<iostream>
using namespace std;

int main()
{
    char s[100];
    cin>>s;
    int i=0;
    while(s[i]!='\0')
    {
        cout<<(char)(int(s[i]-32));
        i++;
    }
    return 0;
}