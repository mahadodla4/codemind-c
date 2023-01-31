#include <bits/stdc++.h>
using namespace std;
int pal(string s)
{
    string p;
    p=s;
    reverse(s.begin(),s.end());
    if(p==s)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string a;
        cin>>a;
        int b=a.length();
        if(pal(a))
        {
            if(b%2==0)
            {
                cout<<"YES EVEN"<<endl;
            }
            if(b%2!=0)
            {
                cout<<"YES ODD"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}