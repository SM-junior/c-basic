#include <stdio.h>

int main()
{

    char name[20];
    name[0] = 'S';
    name[1] = 'h';
    name[2] = 'a';
    name[3] = 'h';
    name[4] = 'i';
    name[5] = 'n';

    // printf("%s\n", name);

    char name1[20] = {'s', 'h', 'a', 'h', 'i', 'n'};
    // printf("my name is-%s\n", name1);

    char name2[20] = "Shahin";
    // printf("my name is - %s\n", name2);

    // printf("index of 0 = %c\n", name[0]);
    // printf("index of 5 = %c\n", name[5]);

    char my_name[20];
    printf("what is your name?\n");
    scanf("%s", &my_name);
    printf("thank you %s\n", my_name);

    return 0;
}
