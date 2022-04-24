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
	int sum=0;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			sum=sum+mat1[i][j];
		}
	}
	printf("%d",sum);
	return 0;
}