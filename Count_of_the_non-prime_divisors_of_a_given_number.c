#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,c,sum=0;
    for(i=1; i<n; i++)
    {
        if(n%i==0)
        {
            if(i>=1)
            {
                c=0;
                for(j=2; j<i; j++)
                {
                    if(i%j==0)
                    {
                        c++;
                    }
                }
                if(c!=0)
                {
                    sum++;
                }
            }
        }
    }
    printf("%d",sum+2);
}