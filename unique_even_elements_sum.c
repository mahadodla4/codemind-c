#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i,j,sum=0,count=0,flag=0;
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0; i<n; i++)
	{
		flag=0,count=0;
		for(j=i+1; j<n; j++)
		{
			if(arr[i]==arr[j])
			{
			    flag=1;
				count++;
			}
		}
		if(flag==0 && count==0 && arr[i]%2==0)
		{
			sum=sum+arr[i];
		}
	}
	printf("%d",sum);
}