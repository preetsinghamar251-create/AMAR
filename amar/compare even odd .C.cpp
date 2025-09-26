//PROGRAM FOR C TO COMPARE EVEN ODD NUBERS
#include<stdio.h>
int main()
{
	int x;
	printf("enter the number");
	scanf("%d",&x);
	if(x%2==0)
	{printf("%d is even",x);
	}
	else
	{printf("%d is odd",x);
	}
	return 0;
}
