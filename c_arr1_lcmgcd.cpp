#include <stdio.h>
#include<malloc.h>
int lcm(int n1,int n2)
{
	int g,i;
   if(n1>n2)
   g=n1;
   else
   g=n2;
   for(i=g;;i++)
   {
   	if(i%n1==0 && i%n2==0)
   	{
   		return i;
   	}
   }
}
int gcd(int n1,int n2)
{
	int g,i;
   if(n1>n2)
   g=n2;
   else
   g=n1;
   for(i=g;;i--)
   {
   	if(n1%i==0 && n2%i==0)
   	{
   		return i;
   	}
   }
}
int main(void) {
int *a,n,i,lcm1,gcd1;
scanf("%d",&n);
a=(int *)malloc(n*sizeof(int));
for(i=0;i<n;i++)
scanf("%d",&a[i]);
lcm1=gcd1=a[0];
for(i=1;i<n;i++)
{
	lcm1=lcm(lcm1,a[i]);
	gcd1=gcd(gcd1,a[i]);
}
printf("%d\n",lcm1);
printf("%d",gcd1);
	return 0;
}
