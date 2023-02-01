#include<bits/stdc++.h>
using namespace std;
int prime(int p)
{
    int i;
    if(p==1)
    {
        return 0;
    }
    for(i=2; i<=sqrt(p); i++)
    {
        if(p%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a,b,c=1,d;
    cin>>a;
    cin>>b;
    while(1)
    {
        if(c>=1)
        {
            d=a+b+c;
            if(prime(d))
            {
                cout<<c;
                break;
            }
        }
        c++;
    }
    
}