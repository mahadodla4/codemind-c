#include<stdio.h>
int main()
{
    int a,b,num,i,tab;
    scanf("%d%d",&num,&a);
    for(i=1; i<=a; ++i)
    {
        tab=num*i;
        if(i%2!=0)
        {
        printf("%d x %d = %d
",num,i,tab);
        }
    }
return 0;
}