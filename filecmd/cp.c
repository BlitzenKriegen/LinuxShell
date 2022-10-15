#include "file.h"

int main(int argc, char *argv[]){
  if(argc < 2){
    write(2, "Error: Command not properly called\n",INSUFFICIENT_ERR);
  }
  else{
    cpFunction(argv);
  }
  return 0;
}

int cpFunction(char *argv[]){
  stat(argv[1],&st);
  int size = st.st_size;


  char data[size];
  int fileSrc = open(argv[1],O_RDONLY);

  read(fileSrc, data, size);
  close(fileSrc);

  int fileDst = open(argv[2],O_CREAT|O_RDWR);
  write(fileDst, data, size);
  close(fileDst);
  return 0;
}
