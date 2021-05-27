

#include <cub.h>

char	*ft_clear_line(char *line)
{
	char	*new_line;
	char	*tmp;

	if (!(new_line = (char *)malloc(ft_count_len(line) + 1)))
		return (NULL);
	tmp = new_line;
	while (*line)
	{
		if (*line != '\t')
		{
			*new_line = *line;
			new_line++;
		}
		line++;
	}
	*new_line = '\0';
	return (tmp);
}
