

#include <cub.h>

int	ft_endwith(char const *str, char const *end)
{
	int	length;
	int	end_length;

	length = ft_strlen(str);
	end_length = ft_strlen(end);
	if (end_length > length)
		return (0);
	return (!ft_strcmp(str + length - end_length, end));
}
