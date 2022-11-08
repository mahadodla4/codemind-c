#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        char s[1000];
        int i,flag=0;
        scanf(" %s
",s);
        int a=strlen(s);
        for(i=0; s[i]!=NULL; i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            printf("No
");
        }
        else
        {
            printf("Yes
");
        }
    }
}