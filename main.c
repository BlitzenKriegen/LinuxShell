#include <stdio.h>

#define USERLENGTH 31


int main(){

  char userName[USERLENGTH];
  char userPass[USERLENGTH];
  
  printf("Welcome to the Linux Shell!\n");
  printf("Enter your username (30 characters max): ");
  scanf("%s", userName);
  printf("\nEnter your password (30 characters max): ");
  scanf("%s", userPass);

  /* will need to have error check eventually */
  printf("Successfully logged in, Welcome %s!\n", userName);
  
  

  return 0;
}
