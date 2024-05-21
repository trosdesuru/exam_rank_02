int ft_atoi(const char *str)
{
  //int i = 0;
  int nbr = 0;
  int sign = 1;

  while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
    {
        str++;
    }
  if (*str == '+' || *str == '-')
  {
    if (*str == '-')
      {
        sign = -1;
      }
      str++;
  }
  while (*str >= '0' && *str <= '9')
  {
    nbr = (nbr * 10) + (*str++ - '0');
    //str++;
  }
  return (nbr * sign);
}