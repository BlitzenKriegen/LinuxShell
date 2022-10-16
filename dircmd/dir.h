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

/*
  Input: Name of the directory
  Output: A created directory by the name given by the input
  Purpose: The function serves to create a directory by the name
  given by user input.
  Details: The function passes in the arguement(s) given by the user
  and passes them to the mkdir() system call. Assuming no errors occour,
  a directory is created at the given path.
*/
int mkdirFunction(char *[]);

/*
  Input: Name of the Directory
  Purpose: rmDir destroys a directory, assuming that there are no contents
  within it.
  Details: The function passes in the name/path of the directory that is to
  be deleted. Then, it calls the rmDir() system call. Assuming no errors occour,
  the directory will then be deleted.
*/
int rmdirFunction(char *[]);

/*
  Input: Path of directory to be listed (can be empty)
  Output: Every item within the directory
  Purpose: Lists all contents of a directory
  Details: Assuming no errors, given a directory (or none in the case of
  getting current directory), the function would subsequently open a directory
  and go through its contents, grabbing a file name and then printing it on its
  own line.
*/
int lsFunction(char []);

/*
  Input: Path to desired directory.
  Purpose: cd changes the working directory of the process.
  Details: Being given a pathname, the function calls chdir() to change the
  working directory of the process.
  
  NOTE: The function ONLY changes the directory for the given process. This means
  the function needs to be integrated at the shell level in order to function.
*/
int cdFunction(char *[]);

/*
  Output: Current Directory
  Purpose: Prints current directory
  Details: The function calls getcwd() and processes the given string to console
  output.
*/
int pwdFunction(char *[]);

/*
  Input: String
  Output: Length of a given string
  Purpose: Find the length of a null terminated string
  Details: The function loops through a null terminated string, incrementing a counter
  until the string reaches a null terminator. The function would then pass back the
  value that was incremented.
*/
int sizeStr(char []);
