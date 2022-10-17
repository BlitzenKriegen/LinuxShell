#include "file.h"

int main(int argc, char *argv[]){
  if(argc < 2){
    write(2, FEW_ARG,INSUFFICIENT_ERR);
  }
  else{
    catFunction(argv);
  }
  return 0;
}

int catFunction(char *argv[]){
  stat(argv[1],&st);
  int size = st.st_size;

  char data[size];
  int filedesc = open(argv[1],O_RDONLY);
  
  if(filedesc == ERR_VAL)
    write(2, "Error opening file\n",19);

  else{
    read(filedesc, data, size);

    close(filedesc);
    write(1, data, size);
    write (1, "\n",1);
  }
  return 0;
}
