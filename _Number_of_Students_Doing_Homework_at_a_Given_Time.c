#include<stdio.h>
int main()
{
    int i,m;
    scanf("%d",&m);
    int a[m];
    for(i=0; i<m; i++)
    {
        scanf("%d",&a[i]);
    }
    int n;
    scanf("%d",&n);
    int b[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&b[i]);
    }
    int o,c=0;
    scanf("%d",&o);
    for(i=0; i<m; i++)
    {
        if(o>=a[i] && o<=b[i])
        {
            c++;
        }
    }
    printf("%d",c);
}