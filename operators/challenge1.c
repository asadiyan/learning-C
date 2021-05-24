#include <stdio.h>

int main(int argc, char *argv[])
{

    double minutes;
    printf("enetr your minutes: \n");
    scanf("%lf", &minutes);

    double days = (minutes / 60)/24;
    double years = days / 365;

    printf("years: %f\n", years);
    printf("days: %f\n", days);


    return 0;
}
