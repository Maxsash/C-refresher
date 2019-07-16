#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
    for (int j=0;j<3;j++)  //This is a nested array
    {
      printf ("MultiArray[%d][%d]=%d\n",i,j,MultiArray[i][j]);
    }
  }
  //To be Noted that Arrays can be passed as function arguments as well.

  /*POINTERS!!
  A variable whos value is the address of another variable.
  */
  int var = 30;
  printf("address of var = %p \n", &var); // &var denotes the address of var
  //Format specifier for pointers is %p
  int *pointer_p;
  pointer_p = &var;
  printf("value of pointer variable = %p \n", pointer_p);
  //Observe the difference
  printf("value stored at pointer = %d \n", *pointer_p);
  //There can be arrays of pointers and pointers can be arguments as well
  //Arrays can be passed as an argument by using pointers

  //Strings
  //It is single dimensional array of characters, terminated by a null charachter.
  char my_string[6] = {'H','e','l','l','o','\0'};
  char string1[] = "Hello";
  //Both are the exact same.
  printf("My string = %s\n",my_string);
  printf("String 1 = %s\n",string1);

  //the following functions are included in string.h
  char string2[] = " world";
  char string3[6];
  strcpy(string3,string1); //string copy (destination, source)
  strcat(string1,string2); // string1 = string1 + string2
  int length= strlen(string1); //returns the length of string
  //printing
  printf("strcpy = %s\n",string3);
  printf("strcat = %s\n", string1);
  printf("strlen = %d\n", length);

  return 0;
}
