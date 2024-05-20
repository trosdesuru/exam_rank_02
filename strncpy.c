#include <stdio.h>

char  lib_strncpy(char *dst, const char *src, int n)
{
  while(n-- && *src)
  {
    *dst++ = *src++;
  }
  *dst = '\0';
  return *dst; 
}

/*int main(void)
{
  char str1[16] = "Hello";
  const char *str2 = "Bye bye, world!";

  lib_strncpy(str1, str2, 16);
  printf("%s\n", str1); 
  return (0);
}*/
