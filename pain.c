#include<stdio.h>
#include<stdlib.h>
int global; //Global variable. Not inside any function.
//Global variables are already initialized by 0. Unline local ones.

int main()
{
  //Arrays
  int NumberArray [3] = {1,2,3}; //not necessary to initialize values
  /*Here, index starts from 0
  NumberArray[0] = 1
  NumberArray[1] = 2
  NumberArray[2] = 3
  */
  char CharArray [4] = {'a','b','c','d'}; //Defining a char array
  //Printing an Array
  for(int i=0;i<3;i++)
  {
    printf("element %d = %d\n", i,NumberArray[i]);
  }

  return 0;
}
