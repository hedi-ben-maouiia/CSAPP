#include<stdio.h>

int uadd_ok(unsigned x, unsigned y){
    unsigned sum = x + y;

    return sum >= x;
}

int main(){
    unsigned x ,y;
    printf("enter 2 unsigned number: \n");
    scanf("%u %u",&x, &y);
    
    if(uadd_ok(x, y))
        printf("Good you safe!\n");
    else 
        printf("OOPS , you have a problem!\n");
}
