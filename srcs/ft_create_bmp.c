

#include <cub.h>

int	ft_create_bmp(char *path)
{
	int fd;

	fd = open(path, O_CREAT | O_WRONLY | O_TRUNC, S_IRWXU);
	if (fd < 0 || !fd)
		return (0);
	return (fd);
}
