#include <stdio.h>

int main()
{
    // signed integer data
    printf("singed integer data");

    short a = 123; // specifier %hi
    printf("The short is - %hi\n", a);

    int b = 6774; // specifier %d
    printf("The integer is - %d\n", b);

    long c = 77667l; // specifier %ld
    printf("The long is - %ld\n", c);

    long long d = 889967LL; // specifier %lld
    printf("The long long is - %lld\n", d);

    int o = 0777; // specifier %o
    printf("The octal is - %o\n", o);

    int h = 0Xffff; // specifier %X
    printf("The hexadecimal is - %X\n", h);
    printf("I am decimal of octal - %d\n", h);

    printf("unsigned integer data\n");

    unsigned short us = 42;
    printf("unsigned short is - %hu\n", us);

    unsigned int ui = 6677;
    printf("unsigned integer is - %u\n", ui);

    unsigned long ul = 986887;
    printf("unsigned long is - %lu\n", ul);

    unsigned long long ull = 56765647;
    printf("unsigned long long is - %llu\n", ull);

    return 0;
}
