//progam to display the input srtring length (wiotout using string library)
#include<stdio.h>
int main()
{
	char a[100];
	printf("enter string");
	scanf("%s",a);
	
	int i;
	for(i=0;a[ i ]!='\0';i++)
    {
    	printf("%d",i);
    }
    printf("%d",i);
    return 0;
}
	
