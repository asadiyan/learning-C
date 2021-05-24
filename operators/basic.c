#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    // arthmetic operators (+, -, *, /, ++, --, %) this operator give us a result as int or any thing:
    int a = 10;
    int b = 20;
    int c = 0;

    printf("arthemetic operators:\n");

    c = a + b; // + adds two numbber
    printf("a + b is: %d\n", c);

    c = a - b;
    printf("a - b is: %d\n", c);

    c = a * b;
    printf("a * b is: %d\n", c);

    c = a / b;
    printf("a / b is: %d\n", c);

    c++;
    printf("c++ is: %d\n", c);

    c--;
    printf("c-- is: %d\n", c);

    c = a % b;
    printf("a %% b is: %d\n", c);

    // logical operators (&&(and), ||(or), !(not)) this operators give us result as aboolean like true or false:
    // if(a = 10 && b = 20) : true
    // if(a = 10 || b = 20) : true
    // if(a != 20) : true
    bool d = true;
    bool e = true;
    bool result;

    printf("logical operators:\n");
    printf("d = true, e = true\n");

    result = d && e;
    printf("d && e(1 is true 0 is false):%d\n", result); //we use %d to boolean var too because boolear is an integer

    result = d || e;
    printf("d || e(1 is true 0 is false):%d\n", result);

    result = !d;
    printf("!d(1 is true 0 is false):%d\n", result);

    // assignment operators:
    c = 0; // c = 
    c += a; // c = c + a
    c -= a; // c = c - a
    c *= a; // c = c * a
    c /= a; // c = c / a
    c %= a; // c = c % a
    c <<= 2; // c = c << 2 left shift assignment
    c >>= 2; // c = c >> 2 right shift assignment
    c &= 2; // c = c & 2 and assignment
    c ^= 2; // c = c ^ 2 exclusive or assignment
    c |= 2; // c = c | 2 inclusive or assignment

    // relational operators:
    // c == a checks if value of c is same as a
    // c != a checks if value of c is not same as a
    // c < a checks if c is lower than a
    // c > a checks if c is greater than a
    // c <= a checks if c is lower or equal to a
    // c >= a checks if c is greater or equal to a

}

