#include "exec.h"
#include "str.h"
#include <sys/types.h>
#include <sys/wait.h>

#define ARG_1 1 /*First input of the user*/

/* 
create struct 2d array for string parsing

*/


int main(int argc, char *argv[]){
  if(execFunc(argv,argc) == ERR_VAL)
    return ERR_VAL;

  return 0;
}

int execFunc(char *argv[], int argc)
{
  char *bincmd = "/bin/";
  char binLk[MAX_LINE];
  char *usrArg[argc];
  int wstatus;
  
  if(strConcat(bincmd, argv[ARG_1], binLk) == ERR_VAL){
    write(2,"Error: Input too large!\n",24);
    return ERR_VAL;
  }

  if(argc > 2){
    usrArg[0] = binLk;
    for(int i = 2; i < argc; i++){
      usrArg[i-1] = argv[i];
      if(i+1 == argc){
	    usrArg[i+1] = NULL;
      }
    }
  }
  char * const arg2[] = {NULL};
 
  pid_t pid = fork();
  if (pid == 0) {
    if(execve(binLk, usrArg, arg2) == ERR_VAL){
      write(2,"Error: Command not Found!\n",26);
      return ERR_VAL;
    }
  }
  if (*argv[argc - 1] != '&') {
    char useroutput[] = "waiting for FG \n";
    write(STDOUT_FILENO, useroutput, sizeof(useroutput));
    waitpid(pid, &wstatus, 0);

    return 0;
  }
    char useroutput[] = "not waiting for FG we are in BG \n";
    write(STDOUT_FILENO, useroutput, sizeof(useroutput));

  return 0;
}


void parseString(char* clLine){


}
