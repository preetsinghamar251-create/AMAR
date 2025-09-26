//program in c to check the leap year
#include<stdio.h>
int main()
{
	int x;
	printf("enter the year" );
	scanf("%d",&x);
	if((x%4==0 && x%100!=0)||(x%400==0))
		printf("%d is a leap year");
		else
		printf("%d is not a leap year");
	
		return 0;
}

