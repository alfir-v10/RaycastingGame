

#include <cub.h>

int	ft_count_len(char *line)
{
	int len;

	len = 0;
	while (*line)
	{
		if (*line != '\t')
			len++;
		line++;
	}
	return (len);
}
