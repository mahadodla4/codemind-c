#include<stdio.h>
#include<math.h>
int Prime(int n)
{
    if(n==1)
    {
        return 0;
    }
    for (int i=2; i<=sqrt(n); i++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n1,n2,sum=0,count=0;
    scanf("%d", &n1);
    scanf("%d", &n2);
    for (int i=n1; i<=n2; i++)
    {
        if(Prime(i))
        {
            sum=sum+i;
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
