// program n cto find sum of dioganals of a matrix
#include<stdio.h>
int main()
{
	int a[10][10],transpose[10][10];
	int m,n,i,j,sum;
	printf("enter the number of rows and column of matrix");
	scanf("%d%d",&m,&n);
	printf("enter the element of matrix \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j);
			sum=sum+a[i][j];
		}
	}
	 printf("sum=%d",sum);
      return 0;
}
