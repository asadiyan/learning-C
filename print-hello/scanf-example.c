#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("enter a value:\n");
    scanf("%s", str);

    printf("enter a value:\n");
    scanf("%d", &i);

    printf("\nyou entered: %s", str);
    printf("\nyou entered: %d", i);



    return 0;
}
