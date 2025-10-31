//program to display an intenger array input from user
#include<stdio.h>
int main()
{
	int a[100],i,n;
	
	printf(" enter the no of elements to store in array");
	scanf(" %d ");
	 
	printf("enter the no of elements to store in the array");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
    {
	  scanf("%d",&a[i]);
    }
    printf( "the arry contains:");
    for(i=0;i<=n-1;i++)
    {
    printf("%d",a[i]);
    }
    return 0;
}

