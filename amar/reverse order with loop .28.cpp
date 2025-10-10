//progrm in c to display reverse order using while loop
#include<stdio.h>
int main()
{
	int n,i,r,q;
	printf("enter the number ");
	scanf("%d",&n);
     q=n;
     while(q>0)
	{
		r=n%10;
	   printf("%d",r);
	   q=n/10;
	}
	return 0;
}
