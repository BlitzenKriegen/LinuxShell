#include "dir.h"

#define ERR_VAL -1

int main(int argc, char *argv[]){
  if(argc < 2){
    write(2, ARG_ERR,INSUFFICIENT_ERR);
  }
  else{
    rmdirFunction(argv);
  }
  return 0;
}

int rmdirFunction(char *argv[]){
  if(rmdir(argv[1]) == ERR_VAL)
     write(2, "Remove directory syscall error\n", 31);
  return 0;
}
