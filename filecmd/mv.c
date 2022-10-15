#include "file.h"

int main(int argc, char *argv[]){
  if(argc < 3){
    write(2, "Error: Command not properly called\n",INSUFFICIENT_ERR);
  }
  else{
    mvFunction(argv);
  }
  return 0;
}

int mvFunction(char *argv[]){
  link(argv[1],argv[2]);
  unlink(argv[1]);

  return 0;
}
