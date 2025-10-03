//program in c to display sum of series
#include<stdio.h>
int main()
{
	int i,n,sum;
	printf("enter the number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
    sum=sum+i;
	printf("sum is %d",sum);
}
