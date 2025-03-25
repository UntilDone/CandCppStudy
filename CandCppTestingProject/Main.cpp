#include <stdio.h>

int main() {
    int a = 2147483647;       // int의 최대값 (32비트 기준)
    printf("%d\n", a);        // 출력: 2147483647

    a = 2147483647+4;           // int 범위 초과
    printf("%d\n", a);        // ??? 이상한 값 출력됨!
}