#include <stdio.h>

#define PROGRAMMER_NAME "Peter"
#define LINE_SEPARATOR "----"
#define BEGIN_END_PROGRAM_SEPARATOR "````"


int main()
{
    printf("%s\nStart of the C written program.\n%s\n", BEGIN_END_PROGRAM_SEPARATOR, LINE_SEPARATOR);
    printf("Name of the creator: %s.\n", PROGRAMMER_NAME);
    printf("%s\nEnd of the C program.\n%s\n", LINE_SEPARATOR, BEGIN_END_PROGRAM_SEPARATOR);

    return 0;
}
