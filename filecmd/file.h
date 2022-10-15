/*
  Names: Kiril S.
         Enrik R

  Module: File Commands

  Purpose: The File module is meant to hold all of the
  commands within the custom shell that deal with file management.

  Details: The module is activated by a call to one of its
  functions in the shell prompt, which then passes in the
  arguements made by the user to to program.
 */
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUFFER 256
#define INSUFFICIENT_ERR 35
struct stat st;

int catFunction(char *argv[]);
int cpFunction(char *argv[]);
int rmFunction(char *argv[]);
int mvFunction(char *argv[]);
