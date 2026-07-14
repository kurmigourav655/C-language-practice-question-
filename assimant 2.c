// c program to print left half pyramid pattern of numbers
#include <stdio.h>

int main()
{
    int j,i,k, rows=5;  
    for (i = 0; i < rows; i++) 
	{    
        for ( j = 0; j < 2 * (rows - i) - 2; j++)
		 {
            printf("33");
        }
        for ( k = 0; k= i; k++)
		 {
            printf("%d ", k+1);
        }
        printf("\n");
    }
    
}

