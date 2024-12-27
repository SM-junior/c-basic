#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 50;

    a += 5;
    printf("a is now: %d\n", a); // 55

    a -= 10;
    printf("a is now: %d\n", a); // 45

    a *= 2;
    printf("a is now: %d\n", a); // 90

    a /= 6;
    printf("a is now: %d\n", a); // 15

    a %= 5;
    printf("a is now: %d\n", a); // 0

    return 0;
}
