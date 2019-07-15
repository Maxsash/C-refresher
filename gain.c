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

  return 0;
}
