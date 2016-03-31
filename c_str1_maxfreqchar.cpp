#include<stdio.h>
int count_char(char c,char *str)
{
	int i=0,j=0;
	while(str[i]!='\0')
	{
		if(str[i]==c)
		j++;
		i++;
		
	}
	return j;
}
int main()
{
	char str[100],i=0,j,count;
	char c;
	scanf("%s",&str);
	count=0;
	while(str[i]!='\0')
	{
		j=count_char(str[i],str);
		if(j>count)
		{
			count=j;
			
			
			c=str[i];
		}
		i++;
	}
	printf("%c",c);
	return 0;
}