//program in c to display the series
#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,x;
	printf("enter the no of terms to be displayed");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		x=pow(2,i);
		printf("%d",x);
	}
	 return 0;
}
