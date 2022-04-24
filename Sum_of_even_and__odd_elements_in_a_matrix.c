#include<stdio.h>
int main()
{
	int r,c;
	scanf("%d%d",&r,&c);
	int mat1[r][c];
	int i,j;
	for(i=0; i<r; i++)                   
	{
	   for(j=0; j<c; j++)               
	   {                               
	   	scanf("%d",&mat1[i][j]);
	   }
	}
	int sum=0,sum1=0;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(mat1[i][j]%2==0)
			{
			    sum=sum+mat1[i][j];
			}
			if(mat1[i][j]%2!=0)
			{
			    sum1=sum1+mat1[i][j];
			}
			
		}
	}
	printf("%d %d",sum,sum1);
	return 0;
}