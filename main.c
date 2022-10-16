#include <stdio.h>

#define USERLENGTH 31
#define CLLENGTH 256

int main(){

  char userName[USERLENGTH];
  char userPass[USERLENGTH];
  
  write(1, "Welcome to the Linux Shell!\n", 28);
  write(1, "Enter your username (30 characters max): ", 41);
  
  read(0, userName, USERLENGTH);
  write(1, "Enter your password (30 characters max): ", 41);

  read(0, userPass, USERLENGTH);

  /* will need to have error check eventually */
  write(1, "Successfully logged in, Welcome!\n", 33);

  char commandLineInput[CLLENGTH];
  read(0, commandLineInput, CLLENGTH);
  
  
  while (commandLineInput != "exit")
  {
    /* processes command line */


    read(0, commandLineInput, CLLENGTH);
  }
  
  return 0;
}
