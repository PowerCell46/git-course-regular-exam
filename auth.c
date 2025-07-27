#include <stdio.h>
#include <string.h>


int validateIfUserIsAdmin(const char* username, const char* password)
{
    return strcmp(username, "PowerCell46") == 0 && strcmp(password, "Peter2025") == 0;
}
