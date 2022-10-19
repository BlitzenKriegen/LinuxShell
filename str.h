#ifndef STR_H
#define STR_H

#include "exec.h"
#include "shell.h"

/*
  NOTE: THIS FUNCTION IS TAKEN DIRECTLY FROM
  THE C STANDARD LIBRARY. However, becasue the
  function does not use any calls to other
  c library functions, it is included in this
  program because to allows for processing
  user input from the command line to if-else
  structures.

  Name: cmp
  
  Purpose: Compare two strings and evauluate
  if they are equal (the same) to eachother.

  Details: As the function is from the C std
  library, the documentation for the function
  can be found here:
  https://documentation.help/C-Cpp-Reference/strcmp.html
 */
int strConcat(char *s, char *s1, char *d);

int cmp (const char *p1, const char *p2);

const int sizeStr(char str[]);


#endif