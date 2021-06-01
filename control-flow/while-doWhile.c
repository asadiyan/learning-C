#include <stdio.h>

int main(int argc, char *argv[])
{

    // counter controlled while loop
    int count = 1;
    while(count <= 5)
    {
        printf("%i\n", count);
        ++count;
    }

    // logic controlled while loop 
    int num = 0;
    scanf("%i", &num);

    while(num != -1)
    {
        scanf("%i", &num);
    }

    // always guaranteed to execute at least one time
    // condition is at the buttom(post - test - loop)
    int var = 0;
    do
    {
        scanf("%i", &var);
    }while(var != 10);

    int number = 0;
    do
    {
        printf("%i\n", number);
        ++number;
    }while(number < 4);

    return 0;
}
