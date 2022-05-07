#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==0 and b%2==0)
    printf("YES");
    else if(a==0 and b%2!=0)
    printf("NO");
    else if((a+(2*b))%2==0)
    printf("YES");
    else
    printf("NO");
}