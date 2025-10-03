//program in c to display the series
#include<stdio.h>
#include<math.h>
int main()
{
	long int i,n,x;
	printf("enter the no of terms ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d",x);
		x=x*x;
	}
	 return 0;
}
