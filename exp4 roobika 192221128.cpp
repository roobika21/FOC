#include<stdio.h>
int main()
{
	int f1=0,f2=1,f3,n;
	scanf("%d",&n);
	printf("\n%d\n%d\n",f1,f2);
	while(n>f3)
	{
	f3=f1+f2;
	printf("%d\n",f3);
	f1=f2;
	f2=f3;	
	}
}
