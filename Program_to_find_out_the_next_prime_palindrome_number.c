#include<iostream>
#include<math.h>
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
int pal(int q)
{
    int m,r,sum=0;
    m=q;
    while(q!=0)
    {
        r=q%10;
        q=q/10;
        sum=sum*10+r;
    }
    if(sum==m)
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
    int n,i;
    cin>>n;
    if(n>=10 and n<=10000)
    {
        for(i=n+1; i>=0; i++)
        {
            if(prime(i))
            {
                if(pal(i))
                {
                    cout<<i;
                    break;
                }
            }
        }
    }
    else
    {
        cout<<"-1";
    }
}