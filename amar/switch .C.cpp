//program in c to use switch operater in addition subtraction and multiplication
#include<stdio.h>
int main()
{
	int i,x,y,z;
	printf("enter the numbers");
	scanf("%d%d",&x,&y);
	printf("enter 1 for add ,2 for sub,3 for multiply");
	scanf("%d",&i);
	switch (i)
	{
		case 1 :
			z=x+y;
			printf("%d",z);
			break;
			case 2 :
				z=x-y;
				printf("%d",z);
				break;
				case 3 :
					z=x*y;
					printf("%d",z);
					break;
				default:
					printf("you have entered the key");
				
				
	}
	return 0;
}
