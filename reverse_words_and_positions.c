#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	scanf("%[^
]s",&s);
	/*strrev(s);(or)*/
	int i,j,t,len=0;
	for(i=0; s[i]!=NULL; i++)
	{
		len++;
	}
	i=0;
	j=len-1;
	while(i<j)
	{
		t=s[j];
		s[j]=s[i];
		s[i]=t;
		i++;
		j--;
	}
	printf("%s",s);
	return 0;
}