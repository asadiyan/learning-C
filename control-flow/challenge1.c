#include <stdio.h>

int main(int argc, char *argv[])
{

    int workedTime;
    int pay = 12;
    int overPay = 18;
    int noTaxPay;
    int totalPay;

    printf("please enter how much you worked this month:\n");
    scanf("%i", &workedTime);

    if(workedTime >= 40)
    {
        noTaxPay = workedTime * overPay;

        switch(noTaxPay)
        {
            case 150:
                totalPay = noTaxPay - (noTaxPay * 0.20);
                break;
            case 300:
                totalPay = noTaxPay - (noTaxPay * 0.15);
                break;
            default:
                totalPay = noTaxPay - (noTaxPay * 0.25);
                break;
        }

    }
    else
    {
        noTaxPay = workedTime * pay;

        switch(noTaxPay)
        {
            case 150:
                totalPay = noTaxPay - (noTaxPay * 0.20);
                break;
            case 300:
                totalPay = noTaxPay - (noTaxPay * 0.15);
                break;
            default:
                totalPay = noTaxPay - (noTaxPay * 0.25);
                break;
        }

    }

    printf("your this month payment is: %d", totalPay);

    return 0;
}
