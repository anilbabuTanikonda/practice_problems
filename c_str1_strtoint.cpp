#include <stdio.h>

int main(void) {
	char s[10]="-123";
	int n=0,i,flag,offset;
	if(s[0]=='-')
	{
		flag=-1;
	}
	if(flag<0)
	offset=1;
	else
	offset=0;
	for(i=offset;s[i]!='\0';i++)
	{
		n=n*10+s[i]-'0';
	}
	if(flag==-1)
	{
		n=-n;
	}
	printf("%d",n);
	
	
	return 0;
}
