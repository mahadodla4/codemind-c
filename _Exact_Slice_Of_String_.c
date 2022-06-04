#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%[^
]%*c",&s);
    int a,b,c,i;
    c=strlen(s);
    scanf("%d%d",&a,&b);
    for(i=0; i<c; i++)
    {
        if(i>=a and i<=b)
        {
            printf("%c",s[i]);
        }
    }
}