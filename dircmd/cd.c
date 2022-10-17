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
  if(chdir(argv[1]) != 0)
    write(2, "Directory error\n",16);
  return 0;
}
