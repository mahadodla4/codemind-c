#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,i,j,count=0,sum=0,arr[100];
    scanf("%d%d",&n,&k);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]==k)
        {
            count++;
            continue;
        }
        sum=arr[i];
        for(j=i+1; j<n; j++)
        {
            sum=sum+arr[j];
            if(sum==k)
            {
                count++;
                break;
            }
            else if(sum>k)
            {
                break;
            }
        }
    }
    printf("%d",count);
    return 0;
    
}