#include <stdio.h>
#include<malloc.h>
void Find_common_elements(int *a,int *b,int n,int n1)
{
	int i,j,k=0,*c,l=0,p,j1=0,flag;
	if(n==0 || n1==0)
	{
		exit(0);
	}
	if(n>n1)
	{
		c=(int *)malloc(n1*sizeof(int));
	}
	else
	{
		c=(int *)malloc(n*sizeof(int));
	}
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<n1;j++)
		{
			flag=0;
			if(a[i]==b[j])
			{
				if(j1!=0)
				{
				for(p=0;p<j1;p++)
				{
					if(c[p]==a[i])
					{
						flag=1;
						break;
					}
				}
				}
				else
				{
					c[0]=a[i];
					j1++;
					break;
				}
				if(flag==0)
				{
				c[j1]=a[i];
				j1++;
				break;
				}
				
			}
		}
	}
	for(p=0;p<j1;p++)
	{
		printf("%d",c[p]);
	}
	if(j1==0)
	printf("No commeon elements");
	
	
}
int main(void) {
	int *a,*b,n,i,n1;
	scanf("%d",&n);
	scanf("%d",&n1);
	a=(int *)malloc(n*sizeof(int));
	b=(int *)malloc(n1*sizeof(int));
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n1;i++)
	scanf("%d",&b[i]);
	Find_common_elements(a,b,n,n1);
	
	return 0;
}
