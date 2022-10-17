#include "dir.h"

#define ERR_VAL -1

int main(int argc, char *argv[]){
  if(argc < 2){
    write(2, ARG_ERR,INSUFFICIENT_ERR);
  }
  else{
    mkdirFunction(argv);
  }
  return 0;
}

int mkdirFunction(char *argv[]){
  if((mkdir(argv[1], S_IRUSR|S_IWUSR|S_IXUSR) == ERR_VAL)
     write(2, "mkdir() error\n",14);
  return 0;
}
