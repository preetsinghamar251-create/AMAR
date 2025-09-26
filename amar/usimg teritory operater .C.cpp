//Program in c to find larger number using teritory operator
#include<stdio.h>
int main()
{
	int main,x,y,z;
	printf("enter the two numbers");
	scanf("%d%d",&x,&y);
	z=x>y?x:y;
	printf("the larger number id %d",z);
	return 0 ;
}
