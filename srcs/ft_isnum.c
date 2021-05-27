

#include <cub.h>

int	ft_isnum(char *line)
{
	if (!line)
		return (0);
	while (*line)
	{
		if (!ft_isdigit(*line))
			return (0);
		line++;
	}
	return (1);
}
