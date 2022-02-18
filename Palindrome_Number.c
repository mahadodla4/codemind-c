#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,a,r,sum=0;
    for(i=0; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
    	a=arr[i];
    	sum=0;
    	while(a>0)
    	{
    		r=a%10;
    		sum=sum*10+r;
    		a=a/10;
		}
		if(sum==arr[i])
		{
			printf("True
");
		}
		else
		{
			printf("False
");
		}
	}
	return 0;
}