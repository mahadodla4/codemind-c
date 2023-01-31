#include<iostream>
using namespace std;
int main()
{
    int m,c=0,i,flag=0;
    cin>>m;
    string s;
    cin>>s;
    for(i=0; s[i]!=NULL; i++)
    {
        if(s[i]=='.')
        {
            c++;
        }
    }
    for(i=0; s[i]!=NULL; i++)
    {
        if(s[i]=='.' and c>(m/2))
        {
            s[i]='B';
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    for(i=0; s[i]!=NULL; i++)
    {
        if(flag==1)
        {
            cout<<s[i];
        }
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
}