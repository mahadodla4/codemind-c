#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c],sum=0,sum1=0,i,j;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
            if(i==j)
            {
                sum=sum+arr[i][j];
            }
            else if(i+j==r-1)
            {
                sum1=sum1+arr[i][j];
            }
        }
    }
    printf("%d",sum+sum1);
}