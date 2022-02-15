#include<stdio.h>
int main()
{
	int i,n,a,sum=0;
	scanf("%d",&i);
	for(n=1;i>n;n++)
	{
	    if(i%n==0)
	    {
	        sum=sum+n;
	    }
	}
    if(sum>i)
	{
	    printf("True");
	}
	else
	{
	    printf("False");
	}
	return 0;
}