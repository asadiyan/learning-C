#include <stdio.h>
#include <stdbool.h>

// argc = argument count
// argv = argument vector
int main(int argc, char *argv[])
{

    int numberOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];
    printf("number of arguments: %d\n", numberOfArguments);
    printf("argument 1 is program name: %s\n", argument1);
    printf("argument 2 is the command line argument: %s\n", argument2);


    int hamid = 10;

    float hamid2 = 23.333;
    double hamid3 = 23.333e11;

    // for using less memory or storage we use short just it self or short int, short double, short float.
    // we can use more memory or storage with having long almost like the way of using short.
    // using unsigned makes sure that it is always positive.
    // signed tells the variable can be both positive and negitive.

    long int x = 12345;
    // the L at the end makes y variable, long long y but it is const;
    long int y = 123456L;

    // if we dont include stdbool.h so we should declare boolean var like _Bool with 0 for false and 1 for true.
    _Bool mybool = 1;

    // true is undefined so we include stdbool.h to use true and false values.
    bool mybool2 = true;

    // your first have to define the enum type and give it a name
    //  initiated by the keyword enum
    //  then the name of the enumerated data type
    //  then list of identifiers(enclosed in a set of curly baraces)that define the permissible values that
    //  can be assigned to the type
    //  now it can store just red or yellow or blue nothing else
    enum primaryColor {red, yellow, blue};
    // myColor and yourColor variables are primaryColor type and they can just
    // store red, yellow, blue other wont work
    // myColor = red; is valid
    // myColor = green; is not valid
    enum primaryColor myColor,yourColor;

    char abi;
    abi = 'a'; // its ok 
    // abi = a;    its not ok 
    // abi = "a"   its not ok now a is string not char
    // abi = 65;   its ok for ASCII, but poor style

    // format specifiers
    int integerVar = 10;
    float floatVar = 10.333;
    double doubleVar = 10.33e33;
    char charVar = 'W';
    bool boolVar = true;
    printf("integerVar = %d\n", integerVar);
    printf("floatVar = %f\n", floatVar);
    printf("doubleVar = %e\n", doubleVar);
    printf("charVar = %c\n", charVar);
    printf("boolVar = %i\n", boolVar);

    float f = 3.9124293365;
    printf("%f\n", f);
    printf("%.5f\n", f);

    return 0;
}
