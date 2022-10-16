#include "dir.h"

int main(int argc, char *argv[]){
  pwdFunction(argv);
  return 0;
}

int pwdFunction(char *argv[]){
  char currDir[BUFFER];
  int pathLen;

  if(getcwd(currDir, BUFFER) == NULL){
    write(2, "Error In getcwd()\n",18);
  }
  else{
    write(1,currDir,BUFFER);
    write(1,"\n",1);
  }

  return 0;
}
