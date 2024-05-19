#include <unistd.h>
#include <stdio.h>

void    print_bits(unsigned char octet)
{
	int i = 7;
	char bits;

	while (i >= 0)
	{
		bits = ((octet >> i ) & 1) + '0';
		write(1, &bits, 1);
		i--;
	}
}

/*int     atoi(const char *str)
{
	int	nbr;
	int sig;
	int	i;

	nbr = 0;
	sig = 1;
	i = 0;
	if (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
			sig = -1;
		i += 1;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		nbr = (nbr * 10) + (str[i++] - '0');
	return (nbr * sig);
}

int main (int argc, char **argv)
{
    unsigned char octet;
		
		if (argc == 2)
		{
			octet = atoi(argv[1]);
			print_bits(octet);
			printf("\n");
		}
		return 0;
}
*/