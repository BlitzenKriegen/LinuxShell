#include "file.h"

int main(int argc, char *argv[]){
  if(argc < 2){
    write(2, FEW_ARG,INSUFFICIENT_ERR);
  }
  else{
    rmFunction(argv);
  }
  return 0;
}

int rmFunction(char *argv[]){
  unlink(argv[1]);

  return 0;
}
