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
    printf("The answer is %d\n", c);

  return 0;
}
