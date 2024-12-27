#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 35;
    int b = 30;

    // bool a_is_greater = a > b;
    // printf("a is greater than b %d\n", a_is_greater);

    // bool a_is_smaller = a < b;
    // printf("a is smaller than b %d\n", a_is_smaller);

    // bool a_is_equal = a == b;
    // printf("a is equal to b %d\n", a_is_equal);

    // bool a_is_no_equal = a != b;
    // printf("a is not equal to b %d\n", a_is_no_equal);

    int c = 10;
    int d = 10;

    bool c_is_smaller_or_equal = c <= d;
    printf("c is smaller or equal to d %d\n", c_is_smaller_or_equal);

    bool c_is_greater_or_equal = c >= d;
    printf("c is greater or equal to d %d\n", c_is_smaller_or_equal);

    return 0;
}
