

#include <cub.h>

int	ft_line_valid(char *line)
{
	while (*line)
	{
		if (*line != ' ' && *line != '1')
			return (0);
		line++;
	}
	return (1);
}
