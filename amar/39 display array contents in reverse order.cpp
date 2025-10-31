//program to display interger contents in reverse order
#include<stdio.h>
int main()
{
	printf(" display contents of an integer in reverse order.\n");
	int a[100],i,n;
	
	printf("enter the no of elements to store in the array: ");
	scanf(" %d ",&n);
	 
	printf("enter the no of elements to store in the array:\n");
	for(i=0;i<=n-1;i++)
    {
	  scanf("%d",&a[i]);
    }
    printf( "the arry contains:");
    for(i--;i>=0;i--)
    {
    printf("%d",a[i]);
    }
    return 0;
}

