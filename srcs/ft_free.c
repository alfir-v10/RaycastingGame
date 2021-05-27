
#include <cub.h>

int	ft_free2d(char **line)
{
	char **tmp;

	tmp = line;
	while (*line)
	{
		free(*line);
		line++;
	}
	free(tmp);
	return (1);
}
