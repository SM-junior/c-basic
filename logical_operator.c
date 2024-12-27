#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool has_nid = false;
    bool has_pass = true;
    bool is_adult = true;

    // bool has_identity = has_nid || has_pass;
    // bool is_permitted = has_identity && is_adult;

    // printf("identity: %d\n", has_identity);
    // printf("permission: %d\n", is_permitted);

    bool is_permitted = (has_nid || has_pass) && is_adult;
    printf("permission: %d\n", is_permitted);

    return 0;
}
