#include "exec.h"
#include "str.c"

int main(int argc, char *argv[]){
  binEx(argv);
  return 0;
}

int binEx(char *argv[]){
  if(dirEx(argv) == -1)
    if((fileEx(argv) == -1)){
      write(2,"Command Not Found\n",18);
      return -1;
    }

  return 0;
}

int fileEx(char *argv[]){
  char * cmd = argv[1];
  if (cmp(cmd,"cat") == 0)
    catFunc(argv[2]);
  else if(cmp(cmd,"cp") == 0)
    cpFunc(argv);
  else if(cmp(cmd,"mv") == 0)
    mvFunc(argv);
  else if(cmp(cmd,"rm") == 0)
    rmFunc(argv[2]);
  else if(cmp(cmd,"emacs") == 0)
    openEmacs(argv[2]);
  else{
    return -1;
  }
  return 0;
}

void openEmacs(char *fileName){
  char * const binLk = "/bin/emacs";
  char * const arg[] = {binLk,fileName,NULL};
  execve(binLk,arg,NULL);
  return;
}

int dirEx(char *argv[]){
  char * cmd = argv[1];
  if (cmp(cmd,"ls") == 0)
    lsFunc();
  else if (cmp(cmd,"pwd") == 0)
    pwdFunc();
  else if (cmp(cmd,"mkdir") == 0)
    mkdirFunc(argv[2]);
  else if (cmp(cmd,"rmdir") == 0)
    rmdirFunc(argv[2]);
  else{
    return -1;
  }
  return 0;
}

void mvFunc(char *argv[]){
  char * const binLk = "/bin/mv";
  char * srcDst[] = {binLk,argv[2],argv[3],NULL};
  char * const arg[] = {binLk,*srcDst,NULL};
  execv(binLk,srcDst);
  return;
}

void rmFunc(char *fileName){
  char * const binLk = "/bin/rm";
  char * const arg[] = {binLk,fileName,NULL};
  execve(binLk,arg,NULL);
  return;
}

void cpFunc(char *argv[]){
  char * const binLk = "/bin/cp";
  char * srcDst[] = {binLk,argv[2],argv[3],NULL};
  char * const arg[] = {binLk,*srcDst,NULL};
  execv(binLk,srcDst);
  return;
}

void rmdirFunc(char *dirName){
  char * const binLk = "/bin/rmdir";
  char * const arg[] = {binLk,dirName,NULL};
  execve(binLk,arg,NULL);
  return;
}

void mkdirFunc(char *dirName){
  char * const binLk = "/bin/mkdir";
  char * const arg[] = {binLk,dirName,NULL};
  execve(binLk,arg,NULL);
  return;
}

void catFunc(char *fileName){
  char * const binLk = "/bin/cat";
  char * const arg[] = {binLk, fileName, NULL};
  execve(binLk, arg, NULL);
  return;
}
  
void pwdFunc(){
  char * const binLk = "/bin/pwd";
  char * const arg[] = {binLk, NULL};
  execve(binLk, arg, NULL);
  return;
}

void lsFunc(){
  char * const binLk = "/bin/ls";
  char * const arg[] = {binLk, NULL};
  execve(binLk, arg, NULL);
  return;
}
