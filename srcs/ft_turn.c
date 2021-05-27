

#include <cub.h>

void	ft_turn(t_cub *cub, double speed)
{
	double	tmp_x_dir;
	double	tmp_x_plane;

	tmp_x_dir = cub->x_dir;
	cub->x_dir = cub->x_dir * cos(speed) - cub->y_dir * sin(speed);
	cub->y_dir = tmp_x_dir * sin(speed) + cub->y_dir * cos(speed);
	tmp_x_plane = cub->x_plane;
	cub->x_plane = cub->x_plane * cos(speed) - cub->y_plane * sin(speed);
	cub->y_plane = tmp_x_plane * sin(speed) + cub->y_plane * cos(speed);
	ft_set_display(cub);
}
