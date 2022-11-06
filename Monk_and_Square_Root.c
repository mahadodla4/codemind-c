#include<stdio.h>
int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=0; j<t; j++)
    {
        long long int a,b,i;
        scanf("%lld %lld",&a,&b);
        int flag=0;
        for(i=0; i<b; i++)
        {
            if((i*i)%b==a)
            {
                printf("%lld
",i);
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("-1
");
        }
    }
}