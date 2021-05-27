

#include <cub.h>

char	*ft_get_color(char *line)
{
	char *new_line;
	char *tmp;

	if (!(new_line = (char *)malloc(ft_len_color(line) + 1)))
		return (NULL);
	tmp = new_line;
	while (*line)
	{
		if (!ft_setchr(*line, " FC\t"))
		{
			*new_line = *line;
			new_line++;
		}
		line++;
	}
	*new_line = '\0';
	return (tmp);
}
