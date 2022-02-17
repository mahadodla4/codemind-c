#include<stdio.h>
int main()
{
	char s[1000];
	scanf("%[^
]%*s",s);
	int i,v=0,c=0,ws=0,d=0;
    for(i=0; s[i]!=NULL; i++)
    {
	    if(s[i]>='0' && s[i]<='9')
		{
			d++;
		}
		else if(s[i]=='a' || s[i]=='e'|| s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U')
		{
			v++;
		}
		else if(s[i]==' ')
		{
		    ws++;
		}
		else
		{
		    c++;
		}
	}
	printf("Vowels: %d
",v);
	printf("Consonants: %d
",c);
	printf("Digits: %d
",d);
	printf("White spaces: %d",ws);
		return 0;
}