#include "dir.h"


int main(int argc, char *argv[]){
  if(argc == 1){
    lsFunction("./");
  }
  else{
    lsFunction(argv[1]);
  }
  return 0;
}
int lsFunction(char dirPath[]){
  DIR *ptDir = opendir(dirPath);
  struct dirent *entry;
  int sLen;
  
  if((ptDir = opendir("/")) == NULL)
    write(2, "Directory open error\n",21);
  else{
    while((entry = readdir(ptDir)) != NULL){
      sLen = sizeStr(entry->d_name);
      write(1,entry->d_name,sLen);
      write(1,"\n",1);
    }
  }
  return 0;
}

int sizeStr(char str[]){
  int len = 0;
  while(str[len] != '\0'){
    len += 1;
  }
  return len;
}
