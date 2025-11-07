//program to find sum of all elements of an integer array
#include<stdio.h>
int main()
{
	int a[100],n,i,sum=0;
	printf("enter the number of element");
	scanf("%d",&n);
	printf("enter %d element \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum = sum+a[i];
	}
	printf("sum of all the number is=%d",sum);
	return 0;
}
