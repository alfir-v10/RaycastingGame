

#include <cub.h>

void	ft_make_map(char *line, t_cub *cub)
{
	if ((*line == '\0' || ft_is_empty_line(line)) && !cub->map_true)
		return ;
	else if (cub->flag_map == 8)
		ft_map_fill(line, cub);
	else if (ft_check_params(line, cub))
		return ;
}
