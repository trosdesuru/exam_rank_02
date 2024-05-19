#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char  lib_strncpy(char **dst, char **src, int n)
{
  char *start = *dst;

  while(n-- && *src)
  {
    *dst++ = *src++;
  }
  *dst = NULL;
  return *start; 
}

int main(void)
{
  char *str1;
  char *str2;
  
  str1[20] = "Hello";
  str2 = "Bye bye, world";

  lib_strncpy(str1, &str2, 20);
  printf("%s\n", &str1);
  return (0);
}