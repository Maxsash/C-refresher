#include<stdio.h>
#include<stdlib.h>
//this is a single line comment
int main()
{
  int age; //variable name= 'age'; data type = integer
  int year=21; //values can be directly initialized
  float pi=3.14; // data type = float
  char the_one = 'M';// don't forget to use the single quotes
  double accurate_pi; // large float/ decimal
    /*RULES FOR VARIABLES
    1. variable name cannot start with a numbers
    2. variable name cannot have spaces
    3. variable name cannot contain special characters
    4. variable name cannot be a pre-defined function name (like main)
    */
    printf("The year is %d\n",year); //pre defined varriables can be printed in this manner

  printf("Hello World!\n"); // "backslash n" is used to change line
  printf("%d\n",147);        // integer
  printf("%ld\n", 12039812938918); // large integer
  printf("%f\n",49.67);     // float or decimal
  printf("%lf\n",0.00092721323); // large flaot or double
  printf("%c\n", 'm'); // single character (always enclose in single quotes)
  printf("%s\n","Wakanda Forever" ); // string (always enclose in double quotes)
  printf("%x\n",16); //hexadecimal
  printf("Printing multiple numbers: %d, %d and %f\n", 12, 237, 420.69); // % things are called placeholders

  puts("This is another sentence\n"); //Alternative to printf

  /*This is a multi line comment.
  It can extend to as many lines as you
  wish for it to.*/

  return 0;              // If the program ran successfully
}
