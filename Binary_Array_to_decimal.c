#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],sum=0,i,temp=n-1;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i]*pow(2,temp);
        temp--;
    }
    printf("%d",sum);
}