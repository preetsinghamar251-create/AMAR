//program to diplsy string in reverse order
#include<stdio.h>
int main()
{
	char str[100],i,n;
	printf("enter the name");
	scanf("%s",&str);
	i=0;
	while(str[i]!='\0')
	{
		i=i+1;
		i++;
    }
    {
    printf("%d ",i);
    }
     n=i;
    for(i=n-1;i>=0;i--)
    {
    	printf("%c ",str[i]);
    }
}

