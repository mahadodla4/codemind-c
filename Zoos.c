#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%[^
]%*s",s);
    int a,x=0,y=0,str;
    a=strlen(s);
    for(str=0; str<a; str++)
    {
        if(s[str]=='z')
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    if(2*x==y)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}