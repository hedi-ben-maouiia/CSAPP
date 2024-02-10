#include<stdio.h>

/*
Assume these are executed as a 32-bit program on a machine that uses two’scomplement arithmetic. Assume also that right shifts of signed values are performed arithmetically, while right shifts of unsigned values are performed logically.
A. Fill in the following table showing the effect of these functions for several
example arguments. You will find it more convenient to work with a hexadecimal representation. Just remember that hex digits 8 through F have their
most significant bits equal to 1.

w           fun1(w)         fun2(w) 0x00000076                     0 
0x87654321
0x000000C9
0xEDCBA987

B. Describe in words the useful computation each of these functions performs.


 */

int fun1(unsigned word)
{
    return (int) ((word << 24) >> 24);
}

int fun2(unsigned word)
{
    return ((int) word << 24) >> 24;
}

int main(void)
{
    printf("fun1 = %.8x\n", fun1(0x00000076));
    printf("fun2 = %.8x\n", fun2(0x00000076));
    printf("fun1 = %.8x\n", fun1(0x87654321));
    printf("fun2 = %.8x\n", fun2(0x87654321));
    printf("fun1 = %.8x\n", fun1(0x000000C9));
    printf("fun2 = %.8x\n", fun2(0x000000C9));
    printf("fun1 = %.8x\n", fun1(0xEDCBA987));
    printf("fun2 = %.8x\n", fun2(0xEDCBA987));

    return 0;
}

