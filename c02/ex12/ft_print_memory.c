#include <unistd.h>

void	print_hexa(unsigned char c)
{
	char *hexa;

	hexa = "0123456789abcdef";
	write (1, &hexa[c / 16], 1);
	write (1, &hexa[c % 16], 1);
}

void	print_str(char *str, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (i % 2 == 1)
			write (1, " ", 1);
		print_hexa(str[i]);
		i++;
	}
	while (i < 16)
	{
		write(1, "  ", 2);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
	write (1, " ", 1);
	i = 0;
	while(i < size)
	{
		if (str[i] < 32 || str[i] == 127)
			write (1, ".", 1);
		else
			write (1, &str[i], 1);
		i++;
	}

}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int				j;

	i = 0;
	while (i < size)
	{
		write (1, "0", 1);
		j = 56;
		while (j >= 0)
		{
			print_hexa((unsigned long int)(addr + i) >> j & 0xff);
			j -= 8;
		}
		write(1, ":", 1);
		if (size - i < 16)
			print_str(addr + i, size - i);
		else
			print_str(addr + i, 16);
		write (1, "\n", 1);
		i += 16;
	}
	return (addr);
}