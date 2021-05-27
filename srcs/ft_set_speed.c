

#include <cub.h>

void	ft_set_speed(t_cub *cub)
{
	cub->draw.z_buf = (double *)malloc(sizeof(double) * cub->w_win);
	cub->move_speed = 0.15;
	cub->rotate_speed = 0.05;
}
