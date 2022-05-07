#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int mat1[n][m],es=0,os=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(i%2==0)
            {
                es=es+mat1[i][j];
            }
            if(i%2!=0)
            {
                os=os+mat1[i][j];
            }
        }
    }
    printf("%d %d",es,os);
}
    