#include <stdio.h>

int main()
{
    int a = 30;
    int b = 7;

    printf("addition %d\n", a + b);
    printf("subtraction %d\n", a - b);
    printf("multiplication %d\n", a * b);
    printf("division %d\n", a / b);
    printf("reminder %d\n", a % b);

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d / %d = %d\n", a, b, a % b);

    return 0;
}
