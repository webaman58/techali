#include<stdio.h>
int main()
{
	int n,b=1,c=0,a;
	printf("enter n:");
	scanf("%d",&n);
	printf("0\n");
	for(int i=1;i<=n;i++)
	{
		a=b+c;
		b=c;
		c=a;
		printf("%d\n",a);
	}
	return 0; 
}