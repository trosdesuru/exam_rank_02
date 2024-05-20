#include <unistd.h>

int main(int ac, char **av)
{
	char *str;

	if (ac != 2)
	{
		return (write(1, "\n", 1));
	}
	str = av[1];
	while (ac == 2 && *str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
		}
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
	return 0;
}
