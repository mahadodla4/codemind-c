#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,count=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n; i+=2)//i=i+2
    {
        if(arr[i]%2==0)
        {
            count++;
            printf("False");
        }
    }
    if(count==0)
    {
        printf("True");
    }
    return 0;
}