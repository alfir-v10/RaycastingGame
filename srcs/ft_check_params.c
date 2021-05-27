

#include <cub.h>

int	ft_check_params(char *line, t_cub *cub)
{
	cub->flag_map += (ft_strchr(line, 'R')) ? 1 : 0;
	cub->flag_map += (ft_strchr(line, 'F')) ? 1 : 0;
	cub->flag_map += (ft_strchr(line, 'C')) ? 1 : 0;
	cub->flag_map += (ft_strchr(line, 'N') && ft_strchr(line, 'O')) ? 1 : 0;
	cub->flag_map += (ft_strchr(line, 'W') && ft_strchr(line, 'E')) ? 1 : 0;
	cub->flag_map += (ft_strchr(line, 'E') && ft_strchr(line, 'A')) ? 1 : 0;
	if (ft_strchr(line, 'S') && ft_strchr(line, 'O'))
		cub->flag_map++;
	else if (ft_strchr(line, 'S') && !ft_strchr(line, '1'))
		cub->flag_map++;
	return (1);
}
