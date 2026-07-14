#include<stdio.h>
void main()
{
	int a=.4;
	int b=7;
	
	printf("\n\n Before swapping..");
	printf("\na %d",a);
	printf("\nB %d",b);
	
	a=a=b;
	b=a-b;
	a=a-b;
	
	printf("\n\n after swappping");
	printf("\nA %d",a);
	printf("\nB %d",b);
}
