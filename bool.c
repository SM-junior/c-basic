#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    bool is_logged_in = true;

    if (is_logged_in)
    {
        printf("User logged in\n");
    }
    else
    {
        printf("user logged out\n");
    };

    return 0;
}
