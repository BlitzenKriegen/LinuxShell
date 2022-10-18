#include "exec.h"

#define TERM '\0'

int strConcat(char *s, char *s1, char *d){
    int i = 0;
    int j = 0;

    if(sizeStr(s) + sizeStr(s1) > MAX_LINE){
      return ERR_VAL;
    }
    else{
      while (s[i] != TERM){
        d[i] = s[i];
        i += 1;
      }
      while (s1[j] != TERM){
        d[i + j] = s1[j];
        j += 1;
      }
      d[i+j] = TERM;
    }
    return 0;
}

int cmp (const char *p1, const char *p2)
{
  const unsigned char *s1 = (const unsigned char *) p1;
  const unsigned char *s2 = (const unsigned char *) p2;
  unsigned char c1, c2;
  do
    {
      c1 = (unsigned char) *s1++;
      c2 = (unsigned char) *s2++;
      if (c1 == '\0')
        return c1 - c2;
    }
  while (c1 == c2);
  return c1 - c2;
}

const int sizeStr(char str[]){
  int len = 0;
  while(str[len] != '\0'){
    len += 1;
  }
  return len;
}
