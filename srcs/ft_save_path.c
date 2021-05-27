
#include <cub.h>

void	ft_save_path(char *line, char *path, t_cub *cub)
{
	int	n;

	n = 0;
	if (ft_strncmp(line, "NO", 2) == 0)
		n = (cub->flag[1] == 0) ? 0 : ft_error(8);
	else if (ft_strncmp(line, "SO", 2) == 0)
		n = (cub->flag[2] == 0) ? 1 : ft_error(8);
	else if (ft_strncmp(line, "EA", 2) == 0)
		n = (cub->flag[3] == 0) ? 2 : ft_error(8);
	else if (ft_strncmp(line, "WE", 2) == 0)
		n = (cub->flag[4] == 0) ? 3 : ft_error(8);
	else if (ft_strncmp(line, "S", 2) == 0)
		n = (cub->flag[5] == 0) ? 4 : ft_error(8);
	cub->tex[n].path = ft_strdup(path);
	cub->flag[n + 1] = 1;
}
