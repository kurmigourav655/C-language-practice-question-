#include<stdio.h>

void main()

 {
    for(int j = 1; j <= rows - i; j++)
    {
        printf(" ");
    }
    for(int k = 1; k <= i * 2 - 1; k++)
    {
        printf("*");
    }
    printf("\n");
}

int main(void)
{
    int i, rows;
    
    printf("Enter Diamond Rows =  ");
    scanf("%d", &rows);
    
    for(i = 1; i <= rows; i++)
    {
        loopLogic(rows, i);
    }
    
    for(i = rows - 1; i > 0; i--)
    {
        loopLogic(rows, i);
    }
}
