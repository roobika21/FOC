#include<stdio.h>
int main()
{
	int sum=0,n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
		sum=sum+i;
		}
		else
		{
			sum=sum-i;
		}
	}
	printf("sum is %d",sum);
}
