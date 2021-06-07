#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    int counter;
    int incounter;

    int prime[50] = {0};
    int primeIndex = 2;

    bool isPrime;

    // hardcode prime numbers
    prime[0] = 2;
    prime[1] = 3;

    // we know 4 is not prime so we start from 5
    // by + 2 we scape all even number like 6,8,10,12,...
    for(counter = 5; counter <= 100; counter = counter + 2)
    {
        isPrime = true;

        for(incounter = 1; isPrime && counter / prime[incounter] >= prime[incounter]; ++incounter)
        {
            if(counter % prime[incounter] == 0)
            {
                isPrime = false;
            }
        }

        if(isPrime == true)
        {
            prime[primeIndex] = counter;
            ++primeIndex;
        }
    }

    for(int i = 0; i < primeIndex; ++i)
    {
        printf("%d, ", prime[i]);
    }

    return 0;
}

