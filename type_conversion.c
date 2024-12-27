#include <stdio.h>

int main()
{
    char ch = 'T';
    printf("%d, %c %x\n", ch, ch, ch);
    int result = (int)ch + 100;
    // printf("result %d\n", result);

    // printf("float %f\n", (float)result);

    float a = 5.8f;
    float b = 5.8f;
    float c = 5.8f;
    float d = 5.8f;

    int res1 = a + b + c + d;
    int res2 = (int)a + (int)b + (int)c + (int)d;
    printf("res1: %d\n", res1);
    printf("res2: %d\n", res2);

    return 0;
}
