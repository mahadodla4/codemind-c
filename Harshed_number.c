#include<stdio.h>
int main()
{
	int i,n,r,a,sum=0,count=0;
	scanf("%d",&n);
	a=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	if(a%sum==0)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}