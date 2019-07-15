#include<stdio.h>
#include<stdlib.h>

//Please start from int main()
//Test function defined here in reference to line 75
void test_function() //void is used since it is not returning any value.
{                 //at least the function name needs to be mentioned before the function is called.
  printf("This is a print from test function\n");
}

//START HERE
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

  //While loop
    int i=0;
    while (i<=3) //loop runs while i is less than or equal to 10
    {
      printf("Value of i is %d\n",i);
      i++;  // another way of "i = i+1"
    } //end of loop
  printf("End of while; Now do-while\n"); //extra line for clarity

  //do while loop
    i =0;
    do     //the loop is run at least once. unlike while loop
    {
      printf("Value of i is %d\n",i);
      i++;
    } while(i<=3); //condition checked after running the loop
  printf("End of do-while; Now for loop\n");

  //for loop
  for (int i = 0; i <= 3; i++) // for(initialization; condition; increment)
  {
    printf("Value of i is %d\n",i);
  } //the increment part is executed right before the end of loop

  /*Functions
  Every c program has at least 1 function: main
  syntax for declaration of function

  type name (type1 arg1, type2 arg2, ...)
  {
    code for function
  }

  */
  test_function(); //this function is defined before main()


  return 0;
}
