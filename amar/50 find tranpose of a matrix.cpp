#include<stdio.h>
int main()
{
	int a[10][10],transpose[10][10];
	int m,n,i,j;
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
			transpose[j][i]=a[i][j];
		}
	}
	printf("transpose of the matrix is \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d \t",transpose[i][j]);
		}
		printf("\n");
    }
}
