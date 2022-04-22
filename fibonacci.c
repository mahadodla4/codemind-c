#include<stdio.h>
#include<math.h>
int main()
{
    int n,a=0,b=1,i,c;
    scanf("%d",&n);
    printf("0 1 ");
    for(i=2; i<n; i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    
}