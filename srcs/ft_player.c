

#include <cub.h>

void	ft_set_player_param(t_cub *cub, int m, int n)
{
	if (++cub->flag_player > 1)
		ft_error(11);
	cub->x_pos = (double)m + 0.5;
	cub->y_pos = (double)n + 0.5;
	if (cub->map[m][n] == 'N')
	{
		ft_set_position_dir(cub, -1, 0);
		ft_set_position_plane(cub, 0, 0.66);
	}
	else if (cub->map[m][n] == 'W')
	{
		ft_set_position_dir(cub, 0, -1);
		ft_set_position_plane(cub, -0.66, 0);
	}
	else if (cub->map[m][n] == 'S')
	{
		ft_set_position_dir(cub, 1, 0);
		ft_set_position_plane(cub, 0, -0.66);
	}
	else if (cub->map[m][n] == 'E')
	{
		ft_set_position_dir(cub, 0, 1);
		ft_set_position_plane(cub, 0.66, 0);
	}
}
