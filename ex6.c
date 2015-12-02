#include <stdio.h>
/* SO there are several ways to break this program.
One way is stated below, however you can also put intial in front of any variable
listed. Or change the string formatters around.*/
int main(int argc, char *argv[]) {
  int distance = 100;
  float power = 2.345f;
  double super_power = 56789.4532;
  char initial = 'A';
  /*Always use double quotes ""
  for strings that are not just a single character.
  You also need to do char name[] for multiple characters.
  No [] will result in errors for how much space/memory to take up */
  char first_name[] = "Johnny";
  char last_name[] = "Colon";
  // Does this work?
  char empty_string[] = "";
  printf("You are %d miles away.\n", distance);
  printf("You have %f levels of power.\n", power );
  printf("You have %f awesome super powers.\n", super_power );
  printf("I have an initial %c.\n", initial);
  printf("I have a first name %s.\n", first_name);
  printf("I have a last name %s.\n", last_name);
  printf("My whole name is %s %c. %s.\n",
  first_name, initial, last_name);

  printf("Did it work? %s.\n", empty_string);

  /* Adding a # will cause a '0' to be prepended to an octal number
  (when using the o conversion specifier),
  or a 0x to be prepended to a hexadecimal number
  (when using a x conversion specifier). For most other conversion specifiers,
  adding a # will simply force the inclusion of a decimal point,
  even if the number has no fractional part. */
  // Will print out the hexadecimal number.
  printf("The hexadecimal number of %d is %#x.\n", distance, distance);
  printf("This is what an octal number looks like!! %d = %#o.\n",
  distance, distance);

  return 0;
}
