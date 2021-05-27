

#include <cub.h>

int	ft_is_fmt(char *line, char *fmt)
{
	if (ft_strncmp(fmt, &line[ft_strlen(line) -
				ft_strlen(fmt)], ft_strlen(fmt)))
		return (0);
	return (1);
}
