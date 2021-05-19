#include <stdio.h>

int main(int argc, char *argv[])
{
    double width = 0, height = 0, perimeter = 0, area = 0;

    printf("enter your rectangle width: \n");
    scanf("%lf", &width);

    printf("enter your rectangle height: \n");
    scanf("%lf", &height);

    perimeter = (width + height) * 2.0;
    area = (width * height);

    printf("your rectangle perimeter is: %e\n", perimeter);
    printf("your rectangle area is: %e\n", area);

    return 0;
}
