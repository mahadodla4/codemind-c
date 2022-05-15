#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],us[100];
    int i=0;
    scanf("%[^
]%*s",s);
    for(i=0; s[i]!=NULL; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            us[i]=s[i]+32;
        }
        else
        {
            us[i]=s[i];
        }
    }
    printf("%s",us);
    
}