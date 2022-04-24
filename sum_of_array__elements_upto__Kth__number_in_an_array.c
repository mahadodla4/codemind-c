#include<stdio.h>
int main()
{
	int n;
    scanf("%d",&n);
	int arr[n],i,sum=0,k;
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&k);
	for(i=0; i<k; i++)
	{
	    sum=sum+arr[i]; 
	}
	printf("%d",sum);
		
}