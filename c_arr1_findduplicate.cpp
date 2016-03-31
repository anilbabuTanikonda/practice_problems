#include <stdio.h>
#include<malloc.h>
void Find_duplicates(int *a,int n)
{
	int c[n],i,j,k=0,p,flag;
if(n==0 || n<0)
{
	exit(0);
}
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
{
	flag=0;
	if(i!=j)
	{
		if(a[i]==a[j])
		{
			if(k!=0)
			{
				for(p=0;p<k;p++)
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
				c[k]=a[i];
				k++;
				break;
			}
			if(flag==0)
			{
				c[k]=a[i];
				k++;
				break;
			}
		}
		
	}
}

}
for(i=0;i<k;i++)
{
	printf("%d",c[i]);
}
if(k==0)
printf("No duplictes");
}
int main(void) {
int *a,n,i;
scanf("%d",&n);
a=(int *)malloc(n*sizeof(int));
for(i=0;i<n;i++)
scanf("%d",&a[i]);
Find_duplicates(a,n);
	return 0;
}
