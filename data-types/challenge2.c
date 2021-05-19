#include <stdio.h>

int main(int argc, char *argv[])
{

    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    enum company xerox = XEROX;
    enum company google = GOOGLE;
    enum company ebay = EBAY;

    printf("%d\n", xerox);
    printf("%d\n", google);
    printf("%d\n", ebay);

    return 0;
}
