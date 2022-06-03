#include<stdio.h>
int main()
{
    int i,count=0,flag=0;
    char s[1000],ch;
    scanf("%[^
]s",s);
    scanf("
%c",&ch);
    for(i=0; s[i]!=NULL; i++)
    {
        if(s[i]==ch)
        {
            count++;
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("%d",count);
    }
    else
    {
        printf("-1");
    }
    
}