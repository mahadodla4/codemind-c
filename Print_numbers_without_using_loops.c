#include<stdio.h>
int main()
{
    long int a,i;
    scanf("%ld",&a);
    if(a>=1&&a<=1000)
    {
        i=0;
        x:i++;
        printf("%ld ",i);
        if(i<a)
        {
            goto x;
        }
    }
    else
    {
        printf("The Number Series is Not Possible Print");
    }
}