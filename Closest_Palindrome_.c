#include<iostream>
using namespace std;
int pal(int n)
{
    int r,sum=0,m;
    m=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        sum=sum*10+r;
    }
    if(m==sum)
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
    int p,i,af,bf,nxt,A,B;
    cin>>p;
    for(i=p-1; i>=0; i--)
    {
        if(pal(i))
        {
            bf=i;
            break;
        }
    }
    nxt=p+1;
    while(1)
    {
        if(pal(nxt))
        {
            af=nxt;
            break;
        }
        nxt++;
    }
    A=af-p;
    B=p-bf;
    if(A<B)
    {
        cout<<af<<endl;
    }
    else if(A==B)
    {
        cout<<bf<<" "<<af<<endl;
    }
    else
    {
        cout<<bf<<endl;
    }
    //cout<<af<<" "<<bf<<" "<<p;
}