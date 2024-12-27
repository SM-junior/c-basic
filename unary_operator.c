#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 5;

    // int result = a++;

    // int result = ++a;

    // int result = a + a++ + a; // 5+5+ 6 =16
    // int result = a + ++a + a; // 5+ 6+6 =17
    // int result = a + ++a + a++; // 5+6+6=17;
    // int result = a + ++a + ++a + a; // 5+6+7+7=25
    int result = ++a + a++ + a + ++a; // 6+6+7+8=27
    printf("%d %d\n", a, result);

    return 0;
}
