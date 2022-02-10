#include<stdio.h>
int main()
{
    int hf,sf,spf;
    scanf("%d%d%d",&hf,&sf,&spf);
    if(hf>50 && sf>60 && spf>100)
    {
        printf("10");
    }
    else if(hf>50 && sf>60)
    {
        printf("9");
    }
     else if(sf>50 && spf>100)
    {
        printf("8");
    }
    else if(hf>50 && spf>100)
    {
        printf("7");
    }
    else if(hf>50 || sf>60 || spf>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
    return 0;
    
    
}