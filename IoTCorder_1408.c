#include "stdio.h"


int main()
{

    char PassArr[20];
    gets(PassArr);

    for (int i = 0; PassArr[i] != '\0'; i++) {
        printf("%c", PassArr[i] + 2);
    }
    printf("\n");
    for (int i = 0; PassArr[i] != '\0'; i++) {
        printf("%c", (PassArr[i] * 7) % 80 + 48);
    }



    return 0;
}