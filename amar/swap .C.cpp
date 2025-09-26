//PROGRAM IN C TO SWAP TWO INTEGERS
#include<stdio.h>
int main()
{
	int x,y,z;
	scanf("%d%d",&x,&y);
	printf("before swaping %d and %d ",x,y );
	//swaping
	z=x;
	x=y;
	y=z;
	printf("after swaping %d",x,y);
	return 0;
}
