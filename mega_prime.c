#include<stdio.h>
int prime(int n)
{
	if(n==1)
	{
		return 0;
	}
    int i,c=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c>1)
    {
    return 0;
    }
    return 1;
}
int main()
{
    int x;
    scanf("%d",&x);
    if(prime(x)==1)
    {
        int rem,c=0,sum=0;
        while(x>0)
        {
          rem=x%10;
          c++;
          sum=sum+prime(rem);
          x=x/10;
        }
        if(sum==c)
        printf("Mega Prime");
        else
        printf("Not Mega Prime");
        
    }
    else
    printf("Not Mega Prime");
}