// C program to print the inverted right half pyramid of
// stars
#include <stdio.h>

int main()
{
    int i,j,rows = 5;

    
    for (i = 0; i < rows; i++)
	 {

        // first inner loop to print the * in each row
        for (j = 0; j < rows - i; j++) {
            printf("12345 ");

        }
        printf("\n");
    }
}

