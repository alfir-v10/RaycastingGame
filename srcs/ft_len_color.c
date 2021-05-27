

#include <cub.h>

int	ft_len_color(char *line)
{
	int count;

	count = 0;
	while (*line)
	{
		if (!ft_setchr(*line, " FC\t"))
			count++;
		line++;
	}
	return (count);
}
