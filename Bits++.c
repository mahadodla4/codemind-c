#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        if(s[1]=='+')
        {
            x+=1;
        }
        if(s[1]=='-')
        {
            x-=1;
        }
    }
    cout<<x;
    
}