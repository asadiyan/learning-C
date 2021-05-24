#include <stdio.h>

int main(int argc, char *argv[])
{

    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; // 0000 1101
    int result = 0;

    result = a & b; // 0000 1100
    printf("result is: %d\n", result);

    result = a | b; // 0011 1101
    printf("result is: %d\n", result);

    result = a ^ b; // 0011 0001
    printf("result is: %d\n", result);

    result = ~a; // 1100 0011
    printf("result is: %d\n", result);

    result = a << 2; // shift to left 2 byte 1111 0000
    printf("result is: %d\n", result);

    result = a << 4; // 0011 1100 0000
    printf("result is: %d\n", result);

    result = a >> 4; // shift to the right by 4 0000 0011
    printf("result is: %d\n", result);



    return 0;
}
