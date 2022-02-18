#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int mat[n][n];
	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	int ps=0,ss=0; 
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i==j)
			{
				ps=ps+mat[i][j];
			}
			if(i+j==n-1)
			{
				ss=ss+mat[i][j];
			}
		}
    }
		printf("Principal Diagonal:%d
",ps);
		printf("Secondary Diagonal:%d",ss);
	return 0;

}