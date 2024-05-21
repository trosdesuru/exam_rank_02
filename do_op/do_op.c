#include <stdio.h>
#include <unistd.h>
//#include <stdlib.h>
int ft_atoi(const char *str);

int main(int ac, char **av)
{
  int nbr1 = 0;
  int nbr2 = 0;
  int result = 0;

  if (ac == 4)
  {
    nbr1 = ft_atoi(av[1]);
    nbr2 = ft_atoi(av[3]);
    //nbr1 = atoi(av[1]);
    //nbr2 = atoi(av[3]);
    if (av[2][0] == '+')
      result = nbr1 + nbr2;
    else if (av[2][0] == '-')
      result = nbr1 - nbr2;
    else if (av[2][0] == '*')
      result = nbr1 * nbr2;
    else if (av[2][0] == '%')
      result = nbr1 % nbr2;
    else if (av[2][0] == '/')
      result = nbr1 / nbr2;
    printf("%d\n", result);
  }
  else
    return (write(1, "\n", 1));
}