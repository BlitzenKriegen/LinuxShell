/*
  Names: Kiril S.
         Enrik R

  Module: Directory Commands

  Purpose: The directory module is meant to
  catalog and hold to functions to perform directory-
  level commands within the shell implementations, such
  as creating/destroying a directory and changing directory.

  Details: The module is activated by a call to one of its
  functions in the shell prompt, which then passes in the
  arguements made by the user to to program, which would then
  process them.
 */
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>

#define BUFFER 256
#define INSUFFICIENT_ERR 26
#define ARG_ERR "Error: Too Few Arguements\n"

int mkdirFunction(char *[]);
int rmdirFunction(char *[]);
int lsFunction(char []);
int cdFunction(char *[]);
int pwdFunction(char *[]);
int sizeStr(char []);
