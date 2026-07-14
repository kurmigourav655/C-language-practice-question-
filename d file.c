#include<stdio.h>
void main()
{
	int a=10;
	int b=20;
	int c;
	printf("\n before swapping..");
	printf("\nA%d",a);
	printf("\ng %d",b);
	
	c=a;//10
	a=b;//20
	b=c;//10
	
	printf("n\nAfter swapping...");
	printf("\n A %d",a);
	printf("\nB %d",b);
}
