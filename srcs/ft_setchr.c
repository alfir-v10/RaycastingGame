

#include <cub.h>

int	ft_setchr(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	if (*set == '\0' && c == '\0')
		return (1);
	return (0);
}
