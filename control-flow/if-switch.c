#include <stdio.h>

int main(int argc, char *argv[])
{

    // simple statement if, no brackets
    int score = 100;
    int big = 90;

    if(score > big)
        printf("jacpot \n");

    // compound statement if, brackets
    if(score > big)
    {
        score++;
        printf("you win\n");
    }

    if(score > big)
        big++;
    else
        score++;


    if(score > 10){
        //
    }
    else if(score < 10){
        //
    }
    else{
        //
    }

    // condition ? expression1 : expression2;
    // if statement was true expression1 else expression2 will execute
    // x = y > 7 ? 25 : 50;
    // first we put y inside x then if x is greater than 7 so x will be 25 else x will be 50

    //switch(expression)
    //{
    //  case value1:
    //      program statement
    //      ...
    //      break;
    //
    //  case value n:
    //      program statement
    //      ...
    //      ...
    //      break;
    //
    //  defult:
    //      program statement
    //      ...
    //      break;
    //}

    enum number {one, two, three, four, five, six, seve};
    enum number mynum = six;

    switch(mynum)
    {
        case one:
            printf("your number is one");
            break;
        case two:
            printf("your number is two");
            break;
        case three:
            printf("your number is three");
            break;
        case four:
            printf("your number is four");
            break;
        case five:
            printf("your number is five");
            break;
        default:
            printf("what ever!");
            break;
    }

    return 0;
}
