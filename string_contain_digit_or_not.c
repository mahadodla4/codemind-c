#include<stdio.h>
int main()
{
	char s[100];
	scanf("%[^
]%*s",s);
	int i,count=0;
	for(i=0; s[i]!=NULL; i++)
	{
	    if(s[i]>='0' && s[i]<='9')
	    {
	        count++;
	    }
	}
	if(count>0)
	printf("Contains %d digit",count);
	else
	printf("Doesn't contain digit");
	return 0;
}