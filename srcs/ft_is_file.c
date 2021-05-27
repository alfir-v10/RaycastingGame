

#include <cub.h>

int	ft_is_file(char *path)
{
	int fd;

	if ((fd = open(path, O_RDONLY)) < 0)
		return (0);
	close(fd);
	return (1);
}
