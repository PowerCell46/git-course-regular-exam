#include <stdio.h>

#define PROGRAMMER_NAME "Peter"

int validateIfUserIsAdmin(const char* username, const char* password);


int main()
{
    printf("Name of the creator: %s.\n", PROGRAMMER_NAME);
    printf("User is admin: %d.\n", validateIfUserIsAdmin("PowerCell46", "Peter2025"));

    return 0;
}
