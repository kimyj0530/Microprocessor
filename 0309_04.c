#include "stdio.h"

int main(void){
    int *ptr;
    int num = 10;
    ptr = &num;
    *ptr = 20;
    printf("%d\n", *ptr);
    printf("%d\n", num);

    return 0;
}