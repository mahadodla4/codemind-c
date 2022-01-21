#include<stdio.h>
#include<math.h>
int main()
{
    int a,num;
    float ps;
    scanf("%d",&num);
    ps=sqrt(num);
    a=ps;
    if(a==ps)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}