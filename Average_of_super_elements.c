#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],c,i,j;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0,count=0;
    float avg;
    for(i=0; i<n; i++)
    {
        c=0;
        for(j=0; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c==arr[i])
        {
            sum=sum+arr[i];
            count++;
            arr[i]=0;
        }
    }
    if(sum==0)
    {
        printf("-1");
    }
    else
    {
        avg=(float)sum/count;
        printf("%.2f",avg);
    }
}