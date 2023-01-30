#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,count=1;
    for(i=1; s[i]!=NULL; i++)
    {
        char c=s[i];
        if(int(c)<=91 and int(c)>=65)
        {
            count++;
        }
    }
    cout<<count;
}