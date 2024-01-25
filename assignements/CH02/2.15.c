/*
 *  Using only bit-level and logical operations, write a C expression that is equivalent to x == y.
 *  In other words, it will return 1 when x and y are equal and 0 otherwise.
 *
*/

#include<stdio.h>


int main()
{
    int x, y;
    printf("Enter 2 number : ");
    scanf("%d %d", &x, &y);

    int is_equal_or_not = !(x ^ y); 
    
    printf("%d\n", is_equal_or_not);
    return 0;
}
