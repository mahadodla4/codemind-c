#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        int m;
        scanf("%d",&m);
        int i,arr[m],c=0;
        for(i=0; i<m; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0; i<m; i++)
        {
            if(arr[i]%2!=0)
            {
                c++;
            }
        }
        printf("%d",c/2);
        printf("
");
        
    }
}