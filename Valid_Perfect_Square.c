#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,a,c;
    float b;
    for(i=0; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        a=arr[i];
        b=sqrt(a);
        c=b;
        if(c==b)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    return 0;
}