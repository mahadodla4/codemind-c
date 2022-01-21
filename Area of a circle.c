#include<stdio.h>
int main()
{
    const float pi=3.14;
    float area;
    int r;
    scanf("%d",&r);
    area=pi*r*r;
    printf("%.2f",area);
    return 0;
}