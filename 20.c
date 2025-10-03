//program in c to display the prime factors
#include<stdio.h>
int main()
{
	int i,n;
	int flag=1;
	printf("enter the number");
	scanf("%d",&n);
	for(i=2i;i<=n/2;i++)
	{
			if(n%i==0)
		{
			flag=0;
			printf("the number is not prime");
			break;	
    }
	if(flag==1)
	printf("the number is prime");
	}
	return 0;
}
