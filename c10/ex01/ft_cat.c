#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <libgen.h>
#include <string.h>

int		ft_strcmp(char *one, char *two)
{
	int		i;
	
	i = 0;
	while (one[i] && one[i] == two[i])
		i++;
	return (one[i] - two[i]);
}

void	ft_putstr(char *str)
{
	int		n;

	n = 0;
	while (str[n])
	{
		write(STDERR_FILENO, str, 1);
		n++;
	}
}

void	ft_display_error(char *name, char *file, char *error)
{
	ft_putstr(name);
	ft_putstr(": ");
	ft_putstr(file);
	ft_putstr(": ");
	ft_putstr(error);
	write(STDERR_FILENO, "\n", 1);
}

int		ft_display_file(char *file)
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
	char	*name;
	int		i;

	name = basename(argv[0]);
	if (argc < 2 && ft_display_file(NULL) < 0)
		ft_display_error(name, NULL, strerror(errno));
	i = 1;
	while (i < argc)
	{
		if (ft_strcmp(argv[i], "-") == 0)
			argv[i] = NULL;
		if (ft_display_file(argv[i]) < 0)
			ft_display_error(name, argv[i], strerror(errno));
		i++;
	}
	return (0);
}