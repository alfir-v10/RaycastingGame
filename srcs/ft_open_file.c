

#include "cub.h"

int	ft_open_file(char *path)
{
	int fd;

	fd = open(path, O_RDONLY);
	if (fd < 0 || !fd)
		ft_error(4);
	return (fd);
}
