#include "dir.h"

int main(int argc, char *argv[]){
  if(argc < 2){
    write(2, ARG_ERR,INSUFFICIENT_ERR);
  }
  else{
    cdFunction(argv);
  }
  return 0;
}

int cdFunction(char *argv[]){
  chdir("..");
  return 0;
}
