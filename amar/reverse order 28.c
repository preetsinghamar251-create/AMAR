//program in c to display the digits of any naturnal no in reverse order without loop
#include<stdio.h>
int main()
{
	int n,q,r,i;
	printf("enter the no");
	scanf("%d",&n);
	q=n/10;
	r=n%10;
	printf("%d %d ",r,q);
	return 0;
	
}
