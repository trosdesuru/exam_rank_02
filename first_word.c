#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
  char *str;

  str = av[1];
  if (ac == 2)
  {
    while (*str == ' ' || *str >= '\t')
      str++;
    while (*str != '0' && *str != ' ' && *str != '\t')
    {
      write(1, str, 1);
      str++;
    }
  }
  write(1, "\n", 1);
  return (0);
}
