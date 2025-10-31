//program in c to display factorial of series
#include<stdio.h>
int main()
{
	int i,n,factorial;
	factorial=1;
	printf("enter the number  ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
    factorial=factorial*i;
	printf("factorial is %d",factorial);
	return 0;
}
