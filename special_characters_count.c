#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%[^
]%*c",s);
    int i,c=0;
    for(i=0; s[i]!=NULL; i++)
    {
        if((s[i]<'a' || s[i]>'z') && (s[i]<'A' || s[i]>'Z') && (s[i]<'0' || s[i]>'9') && s[i]!=' ')
        {
            c++;
        }
    }
    printf("%d",c);
}