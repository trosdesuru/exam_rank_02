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

int main(void)
{
  char dst[16] = "Hello";
  const char *src = "Bye bye, world!";

  lib_strncpy(dst, src, 16);
  printf("\nResult String: %s\n\n", dst);
  return (0);
}
