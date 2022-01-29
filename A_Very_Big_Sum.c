#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int arr[n],sum=0;
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%lli",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
    printf("%lli",sum);
    return 0;
}
    