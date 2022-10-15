#include "dir.h"

int main(int argc, char *argv[]){
  if(argc < 2){
    write(2, "Error: Too Few arguements\n",INSUFFICIENT_ERR);
  }
  else{
    mkdirFunction(argv);
  }
  return 0;
}

int mkdirFunction(char *argv[]){
  mkdir(argv[1], S_IRUSR|S_IWUSR|S_IXUSR);
  return 0;
}
