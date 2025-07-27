#include <stdio.h>


struct User
{
    const char* username;
    const char* password;
    int age;
};

struct User initUser(const char* username, const char* password, const int age)
{
    struct User user;
    user.username = username;
    user.password = password;
    user.age = age;

    return user;
}
