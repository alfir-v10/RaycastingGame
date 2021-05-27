

#include <cub.h>

int	ft_is_empty_line(char *line)
{
	while (*line)
	{
		if (!ft_setchr(*line, " \t"))
			return (0);
		line++;
	}
	return (1);
}
