#include<stdio.h>
int Prime(int n)
{
    for (int i=2; i<(n/2)+1; i++)
    {
        if (n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n1,n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    for (int i=n1+1; i <= n2; i++)
    {
        if(Prime(i))
        {
            printf("%d
", i);
        }
    }
    return 0;
}