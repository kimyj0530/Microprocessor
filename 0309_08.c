#include "stdio.h"

int main(void)
{
    char *arr[3];
    int i;
    arr[0] = "BlockDMask";      // arr[0]은 -> 문자열 주소를 가리킴
    arr[1] = "C Programming";   // arr[1]은 -> 문자열 주소를 가리킴
    arr[2] = "point_arr";       // arr[2]은 -> 문자열 주소를 가리킴
    for(i=0; i<3; i++){
        printf("arr[%d] -> %s\n", i,arr[i]);
    }
    return 0;
}