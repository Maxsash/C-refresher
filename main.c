#include<stdio.h>
#include<stdlib.h>
//this is a single line comment

/*This is a multi line comment.
It can extend to as many lines as you
wish for it to.*/
int main()
{
  int age; //variable name= 'age'; data type = integer
  int year=21; //values can be directly initialized
  float pi=3.14; // data type = float
  char the_one = 'M';// don't forget to use the single quotes for char
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

  /*MATHEMATICAL OPERATORS
    (+) - Addition
    (-) - Subtraction
    (*) - Multiplication
    (/) - Division
    (%) - Modulus (remainder)

    There is an order of precedence which goes like
    paranthesis-->multiplication-->division-->modulus-->addition-->subtraction
  */
    int a = 2, b = 4;
    int sum; // sometimes the data type of result maybe different than data type of operands (usually division).
    sum = a+b;
    printf("The sum is %d\n", sum); //can play around with these values and operators

// IF-ELSE conditions and SCANF (user input)
  printf("Please enter the age:\n"); //asking for user input
  scanf("%d", &age);
    /* ABOUT SCANF
    %d placeholder used since we are asking for interger input.
    And we need to store the user input into the variable age, hence that.
    the symbol '&' is used since we need to store at the ADDRESS OF variable age.
    so & symbol is basically used to denote address.
    */
  if (age>18) //condition(s) is specified here
  { //This code will run if the condiiton is TRUE. If not,
    // curly bracket thing is skipped.
    printf("The age %d is greater than 18\n", age);
  }
  if (age==18)
  { //This condiiton will also be checked regardless
    //of the result of the previous if condition.
    printf("The age is 18\n");
  }
  else if (age<18)
  { /*This condition will ONLY be checked if the previous
     condition was not fulfilled. Not ALL previous conditions
     just the one immediately before this one.
     So, The first IF will be checked. second IF will be checked.
     'else if' will only be checked if the second IF condiiton is
     not met. If the conditions for the second IF are met, then
     'else if' is skipped.
     There can be as many 'else-ifs' as you want.
    */
    printf("The age is less than 18\n");
  }
  else
  {//This will run if all previous if-else-if conditions
   // are false. Starting from the latest IF. That Will
   // be the second IF in this case.
   printf("The age is GREATER THAN 18\n"); // returns an error.
  }
  // If-else-if can be nested. 

  return 0; // If the program ran successfully
}
