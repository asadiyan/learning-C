#include <stdio.h>

int main(int argc, char *argv[])
{

    printf("size of char: %zd\n", sizeof(char));
    printf("size of short: %zd\n", sizeof(short));
    printf("size of int: %zd\n", sizeof(int));
    printf("size of long: %zd\n", sizeof(long));
    printf("size of long long: %zd\n", sizeof(long long));
    printf("size of float: %zd\n", sizeof(float)); 
    printf("size of double: %zd\n", sizeof(double));
    printf("size of long double: %zd\n", sizeof(long double));

    return 0;
}
