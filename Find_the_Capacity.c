#include<stdio.h>
int main()
{
    int s,t,b,capacity,ckb;
    scanf("%d%d%d",&s,&t,&b);
    capacity=2*s*t*b*512;
    ckb=capacity/1024;
    printf("%dKB",ckb);
}