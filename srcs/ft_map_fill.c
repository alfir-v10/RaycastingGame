

#include <cub.h>

void	ft_map_fill(char *line, t_cub *cub)
{
	int	i;

	i = 0;
	while (*line)
	{
		cub->map[cub->rows][i] = *line;
		line++;
		i++;
	}
	cub->map[cub->rows][i] = '\0';
	cub->rows++;
	cub->map_true = 1;
}
