// #include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
  char *str;

  if (ac != 2)
  {
    write(1, "\n", 1);
    return (1);
  }
  str = av[1];
  while (*str)
  {
    if ((*str >= 'a' && *str <= 'y') ||
    (*str >= 'A' && *str <= 'Y'))
    {
      *str += 1;
      write(1, str, 1);
    }

    else if (*str == 'z' || *str == 'Z')
    {
      *str -= 25;
      write(1, str, 1);
    }
    else
      write(1, (const void *)str, 1);
    str++;
  }
  write(1, "\n", 1);
  return (0);
}
