#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    int a[m],i;
    for(i=0; i<m; i++)
    {
        scanf("%d",&a[i]);
    }
    int n;
    scanf("%d",&n);
    int b[n],j;
    for(j=0; j<n; j++)
    {
        scanf("%d",&b[j]);
    }
    int temp,temp1,c=0;
    for(i=0; i<m; i++)
    {
        for(j=i+1; j<m; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            if(b[i]>b[j])
            {
                temp1=b[i];
                b[i]=b[j];
                b[j]=temp1;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        if(a[i]==b[i])
        {
            c++;
        }
    }
    if(c==m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}