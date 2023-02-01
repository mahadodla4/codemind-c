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
int min(int q,int r)
{
    if(q<r)
    {
        return q;
    }
    else
    {
        return r;
    }
}
int main()
{
    int n,i,af,bf,nxt,A,B;
    cin>>n;
    if(prime(n))
    {
        cout<<"0"<<endl;
    }
    else
    {
        for(i=n-1; i>0; i--)
        {
            if(prime(i))
            {
                bf=i;
                break;
            }
        }
        nxt=n+1;
        while(nxt)
        {
            if(prime(nxt))
            {
                af=nxt;
                break;
            }
            nxt++;
        }
        A=af-n;
        B=n-bf;
        cout<<min(A,B)<<endl;
    }
}