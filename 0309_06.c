#include "stdio.h"

int main(void)
{
    int arr[3] = {0,1,2};           // 배열 초기값 출력 해보기
    printf("arr[0]: %d\n", arr[0]); 
    printf("arr[1]: %d\n", arr[1]); 
    printf("arr[2]: %d\n", arr[2]); 
    int *ptr = &arr[0];             // 배열을 조작할 포인터 선언, arr[0] 첫번째 주소를 가리킴.
    *ptr = 10;                      // 첫번쨰 값 변경
    *(ptr+1) = 30;                  // 두번째 값 변경, 자료형이 int이므로 1씩 증가하면 4byte씩 이동
    *(ptr+2) = 300;                 // 세번째 값 변경
    printf("변경 후 배열 출력\n");   // 배열 출력
    printf("arr[0]: %d\n", arr[0]); 
    printf("arr[1]: %d\n", arr[1]); 
    printf("arr[2]: %d\n", arr[2]); 
    return 0;
}