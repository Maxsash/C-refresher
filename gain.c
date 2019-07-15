#include<stdio.h>
#include<stdlib.h>

int main()
{
  //Ternary (conditional) operator
    int a=3, b=23;
    int c;
    /*
    (logical expression) ?  (if true return this) : (else return this)
    */
    c = (a>b) ? b:a;
    /* Here the condition is not fulfilled hence
    a will be returned. If the condition was fulfilled
    then b will be returned*/
    printf("The answer is %d\n", c);

  //Switch statements
    int marks =90; //initializing a variable

    switch(marks) // the variable that will be considered
    {
      case 97:
      case 95:
      case 90:
      case 85:
        printf("Excellent\n"); //this will run for 97,95,90 and 85.
        break;              //since there is no break there.
      case 75:
      case 70:
        printf("Very good\n"); // will run for 75 and 70
        break;             //a break gets you out of current function
      case 60:
        printf("good\n");
        break;
      case 40:
        printf("Ok\n");
        break;
      default:      //if no other case is satisfied| OPTIONAL
        printf("Grade unavailable\n");
    }

  return 0;
}
