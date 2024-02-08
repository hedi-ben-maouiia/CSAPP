#include <stddef.h>
#include<stdio.h>
#include<string.h>
typedef unsigned char *byte_pointer;

/* Function to show the hexadecimal reprisentation object*/
void show_bytes(byte_pointer start, size_t len)
{
    int i;
    for(i=0; i < len; ++i)
        printf("%.2x ", start[i]);
    printf("\n");
}

void show_int(int x)
{
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x)
{
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_short(short x)
{
    show_bytes((byte_pointer) &x, sizeof(short));
}

void show_long(long x)
{
    show_bytes((byte_pointer) &x, sizeof(long));
}

void show_double(double x)
{
    show_bytes((byte_pointer) &x, sizeof(double));
}

void show_pointer(void *x)
{
    show_bytes((byte_pointer) &x, sizeof(void *));
}

void test_show_bytes(int val)
{
    int ival = val;
    float fval = (float) ival;
    int *pval = &val;
    short shval = (short) val; 
    long lval = (long) val;
    double dval = (double) val;

    show_int(ival);
    show_float(fval);
    show_pointer(pval);
    show_short(shval);
    show_long(lval);
    show_double(dval);
}


// Practice Problem 2.10
void inplace_swap(int *x, int *y)
{
    *y = *x ^ *y; // Step 1
    *x = *x ^ *y; // Step 2
    *y = *x ^ *y; // Step 3
}
// Practice Problem 2.11
void reverse_array(int a[], int cnt)
{
    int first, last;
    for(first = 0, last = cnt-1; first < last;++first, --last)
    {
        inplace_swap(&a[first], &a[last]);
    }
}
int main(void)
{
    /*Home Work 2.56*/
    test_show_bytes(0);
    printf("##############\n");  
    test_show_bytes(1); 
    printf("##############\n"); 
    test_show_bytes(2);
    printf("##############\n"); 
    test_show_bytes(3);
    printf("##############\n"); 
    /*Test for assignment 2.5*/
    int a = 0x12345678;
    byte_pointer ap = (byte_pointer) &a;
    show_bytes(ap, 1); /* A. */
    show_bytes(ap, 2); /* B. */
    show_bytes(ap, 3); /* C. */
    
    /*Test for assignment 2.6*/
    const char *m = "mnopqr";
    show_bytes((byte_pointer) m, strlen(m));


    return 0;
}
