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
int min(int c,int d)
{
    if(c<d)
    {
        return c;
    }
    else
    {
        return d;
    }
}
int main()
{
    int i,a,c=0,af,bf,ss,A,B;
    cin>>a;
    for(i=a; i>0; i--)
        {
            if(prime(i))
            {
                bf=i;
                break;
            }
        }
        ss=a+1;
        while(1)
        {
            if(prime(ss))
            {
                af=ss;
                break;
            }
            ss++;
        }
    A=af-a;
    B=a-bf;
    cout<<min(A,B)<<endl;
}