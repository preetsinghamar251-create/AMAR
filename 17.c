//program in c to display product of series
#include<stdio.h>
int main()
{
	int i,n,product;
	product=1;
	printf("enter the number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
    product=product*i;
	printf("product is %d",product);
	return 0;
}
