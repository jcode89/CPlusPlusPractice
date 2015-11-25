#include <stdio.h>
// The above statement is how you load header files to be used in your program.
// It contains the list of functions we will want to use in our program.

/* This is a comment.
When this program is run the computer will load your program and then search
for and run the main function. */
int main(int argc, char *argv[])
/* char *argv[] is an array of strings (character pointers)
representing the individual arguments provided on the command line.
argc is the number of command line arguments. */
{
    // type name = value; That is the format to create a variable.
    int distance = 100;

    // This is also a comment.
    printf("You are %d miles away. \n", distance);

    return 0;
}
