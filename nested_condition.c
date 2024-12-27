#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int age;
    int has_nid;
    int has_pass;

    // printf("enter your age:\n");
    // scanf("%d", &age);

    // printf("do you have passport?:(1 for yes 0 for no)\n");
    // scanf("%d", &has_pass);

    // printf("do you have nid?:(1 for yes 0 for no)\n");
    // scanf("%d", &has_nid);

    int a, b, c;
    printf("enter value of a: ");
    scanf("%d", &a);

    printf("enter value of b: ");
    scanf("%d", &b);

    printf("enter value of c: ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("a(%d) is bigger\n", a);
    }
    else if (b > c)
    {
        printf("b(%d) is bigger\n", b);
    }
    else if (c > a && c > b)
    {
        printf("c(%d) is bigger\n", c);
    }
    else
    {
        printf("three(%d, %d, %d) are same\n", a, b, c);
    }

    return 0;
}
