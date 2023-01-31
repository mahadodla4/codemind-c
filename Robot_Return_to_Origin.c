#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0,d=0,i;
    for(i=0; s[i]!=NULL; i++)
    {
        if(s[i]=='U')
        {
            c++;
        }
        if(s[i]=='D')
        {
            c--;
        }
        if(s[i]=='L')
        {
            d--;
        }
        if(s[i]=='R')
        {
            d++;
        }
    }
    if(c==0 and d==0)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
}