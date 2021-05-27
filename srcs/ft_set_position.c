

#include <cub.h>

void	ft_set_position_dir(t_cub *cub, double xd, double yd)
{
	cub->x_dir = xd;
	cub->y_dir = yd;
}

void	ft_set_position_plane(t_cub *cub, double xp, double yp)
{
	cub->x_plane = xp;
	cub->y_plane = yp;
}
