#include "file.h"

int main(int argc, char *argv[]){
  if(argc < 2){
    write(2, FEW_ARG,INSUFFICIENT_ERR);
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
  
  if (fileSrc == ERR_VAL)
    write(2, "Error in Opening Read File\n",27);
  else{
    if (read(fileSrc, data, size) == ERR_VAL)
      write(2, "Error in Reading File\n",19);
    close(fileSrc);

    int fileDst = open(argv[2],O_CREAT|O_RDWR);
    if (fileDst == ERR_VAL){
      write(2, "Error in Opening Write File\n",28);
    }
    else{
      if (write(fileDst, data, size) == ERR_VAL);
        write(2, "Error Writing to File\n",22);
      close(fileDst);
    }
  }
  return 0;
}
