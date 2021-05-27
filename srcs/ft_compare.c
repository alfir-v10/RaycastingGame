

#include <cub.h>

int	ft_compare(char **lines)
{
	return ((!ft_strcmp(*lines, "EA") || !ft_strcmp(*lines, "NO") ||
				!ft_strcmp(*lines, "SO") || !ft_strcmp(*lines, "WE") ||
				!ft_strcmp(*lines, "S")));
}
