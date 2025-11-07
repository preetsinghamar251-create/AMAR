//program in c to search for an element in integer array
#include<stdio.h>
int main()
{
	int a[100],n,i,x;
	int flag=0;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the element of array ",n);
	for(i=0;i<n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(x==a[i]);
		{
	printf("element found at%d",i);
	flag=1;
	break;
     }
    }
    if(flag==0)
    {
    	printf("not found");
    }
	return 0;
}
