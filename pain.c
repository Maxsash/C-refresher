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

  //Multi Dimensional Arrays
  int MultiArray [2][3] = // rows, columns
  {
    {5,6,7}, //row 0
    {2,7,3}  //row 1
  };
  //Printing a multi dimensional array
  for (int i=0;i<2;i++)
  {
    for (int j=0;j<3;j++)
    {
      printf ("MultiArray[%d][%d]=%d\n",i,j,MultiArray[i][j]);
    }
  }

  return 0;
}
