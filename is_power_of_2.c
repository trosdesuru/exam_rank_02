//#include <stdio.h>

int is_power_of_2(unsigned int n)
{
  unsigned int i = 1;

  while (n && i < n)
  {
    if (n == 0)
      return 0;
    else if (n % 2 == 0)
      n = n / 2;
    else
      return 0;
  }
  return 1;
}

// int main(void)
// {
//   int i = 0;
//   while (i >= 0 && i < 10)
//   {
//     printf("Number = %d, Is Power of two = %d\n", i, is_power_of_2(i));
//     i++;
//     if (i == 10)
//       printf("Number = %d, Is power of two = %d", 1, is_power_of_2(i));
//   }
//   printf("%c", '\0');
//   return 0;
// }