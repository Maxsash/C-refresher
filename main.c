#include<stdio.h>
#include<stdlib.h>

int main()
{
  printf("Hello World!\n"); // "backslash n" is used to change line
  printf("%d\n",147);        // integer
  printf("%ld\n", 12039812938918); // large integer
  printf("%f\n",49.67);     // float or decimal
  printf("%lf\n",0.00092721323); // large decimal or double
  printf("%c\n", 'm'); // single character (always enclose in single quotes)
  printf("%s\n","Wakanda Forever" ); // string (always enclose in double quotes)
  printf("%x\n",16); //hexadecimal 
  printf("Printing multiple numbers: %d, %d and %f\n", 12, 237, 420.69); // % things are called placeholders
  return 0;              // If the program ran successfully
}
