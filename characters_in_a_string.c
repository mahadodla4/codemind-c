#include<stdio.h>
int main()
{
    char s[1000];
    scanf("%[^
]%*s",s);
    int i,count=0;
    for(i=0; s[i]!=NULL; i++)
    {
        if(s[i]>='a' || s[i]<='b')
        {
            count++;
        }
    }
    printf("%d",count);
}