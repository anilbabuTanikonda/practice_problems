/*Find min and max elements in given array*/
#include <stdio.h>
#include<malloc.h>
#include<stdlib.h>
void min_max(int *a,int l)
{
	int i,min,max;
	
	if(l==0)
	exit(0);
	min=a[0];
    max=a[0];
	if(l==1)
	{
		
		printf("min=%d max=%d",min,max);
	}
	else
	{
		for(i=1;i<l;i++)
		{
			if(a[i]>max)
			max=a[i];
			if(a[i]<min)
			min=a[i];
			
		}
		printf("min=%d max=%d",min,max);
		
	}
	
}
int main(void) {
	int *a,i,n;
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int));
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	min_max(a,n);
	return 0;
}
