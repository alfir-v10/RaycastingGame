

#include <cub.h>

int	ft_strchr_count(char c, char *line)
{
	int	count;

	if (!line)
		return (0);
	count = 0;
	while (*line)
	{
		if (*line == c)
			count++;
		line++;
	}
	return (count);
}
