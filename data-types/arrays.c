#include <stdio.h>

// a way of defining constant
#define MONTHS 12

int main(int argc, char *argv[])
{

    // defining an array
    int count[5];

    // defining an array and initializing it
    int counter[5] = {0, 0, 0, 0, 0};

    // we can set all of elemtes of an array or we dont
    // here arry[2] is set to 0
    int arry[3] = {0, 1};

    // month is constant we have defined it at top
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;

    for(index = 0; index < MONTHS; index++)
    {
        printf("month %d has %2d days!\n", index + 1, days[index]);
    }

    // defining a matrix:
    // matrix[row][column];
    int numbers[3][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {47, 48, 49, 50}
    };
    printf("%d\n", numbers[0][0]);
    printf("%d\n", numbers[1][1]);

    // we have 3d matrix but its not common
    // int box [z][x][y]
    int box[10][15][20];
    int box2[2][2][2] = {
        {
            // first block of 2 rows
            {1, 2},
            {3, 4}
        },
        {
            // second block of 2 rows
            {5, 6},
            {7, 8}
        }
    };

    return 0;
}
