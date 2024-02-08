#include<stdio.h>


int main(void)
{
    int x = 0x89ABCDEF;
    int y = 0x76543210;
    int resutl = ((y & 0xff) & x);
    printf("%.8x", resutl);
    return 0;
}
