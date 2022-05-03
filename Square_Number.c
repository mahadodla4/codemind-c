#include<stdio.h>
int main()
{
    int n,flag=0,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        if(n==i*i)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
    