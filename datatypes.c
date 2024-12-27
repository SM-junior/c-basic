#include <stdio.h>

int main()
{

    int number = 50;
    float number2 = 44.99f;
    char name = 'T'; // for character must use single coat(' ');

    printf("%d\n", number);
    printf("%f\n", number2);
    printf("%c\n", name);

    number = number2;
    printf("%d\n", number);

    return 0;
}
