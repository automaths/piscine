#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str, int fd)
{
	int		n;

	n = 0;
	while (str[n])
		n++;
	write(fd, str, n);
}

int	ft_display_file(char *file)
{
	char	buf[4096];
	int		fd;
	int		n;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (-1);
	while ((n = read(fd, buf, 4096)) > 0)
		write(1, buf, n);
	close(fd);
	if (n)
		return (-1);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
		ft_putstr("File name missing.\n", STDERR_FILENO);
	if (argc > 2)
		ft_putstr("Too many arguments.\n", STDERR_FILENO);
	if (ft_display_file(argv[1]) < 0)
		ft_putstr("Cannot read file.\n", STDERR_FILENO);
	return (0);
}