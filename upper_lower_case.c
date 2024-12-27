#include <stdio.h>

int main()
{

    char ch;
    printf("Enter a  character: ");
    scanf("%c", &ch);

    if (ch >= 48 && ch <= 57)
    {
        printf("%c is a number\n", ch);
    }
    else if (ch > 65 && ch <= 99)
    {
        printf("%c is a upperCase letter\n", ch);
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("%c is a lowerCase letter\n", ch);
    }
    else
    {
        printf("%c is a special character\n", ch);
    }
    return 0;
}
