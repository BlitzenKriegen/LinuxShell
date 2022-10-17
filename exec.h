#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>

int binEx(char *[]);
int dirEx(char *[]);
int fileEx(char *[]);

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
int cmp(const char *, const char *);

void catFunc(char *);
void lsFunc();
void mkdirFunc(char *);
void rmdirFunc(char *);
void pwdFunc();
void cpFunc(char*[]);
void rmFunc(char*);
void mvFunc(char *[]);
void openEmacs(char *);

const int sizeStr(char []);
char* strConcat(char*,const char*);
