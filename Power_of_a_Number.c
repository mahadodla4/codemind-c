#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,i,n,pro,mod;
    scanf("%d%d%d",&x,&y,&m);
    pro=pow(x,y);
    mod=pro%m;
    printf("%d",mod);
    return 0;
}