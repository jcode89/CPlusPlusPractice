#include <stdio.h>

/* Warning: This program is wrong on purpose. */
/* Fixed using valgrind */
int main()
{
    int age = 10;
    int height = 72;

    printf("I am %d years old.\n", age);
    printf("I am %d inches tall.\n", height);

    return 0;

}
