#include <stdio.h>

int main() {
    int a = 2147483647;       // int�� �ִ밪 (32��Ʈ ����)
    printf("%d\n", a);        // ���: 2147483647

    a = 2147483647+4;           // int ���� �ʰ�
    printf("%d\n", a);        // ??? �̻��� �� ��µ�!
}