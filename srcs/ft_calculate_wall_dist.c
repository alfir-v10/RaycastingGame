

#include <cub.h>

void	ft_calculate_wall_dist(t_cub *cub)
{
	if (cub->ray.side == 0)
		cub->ray.wall_dist = (cub->imap.x - cub->x_pos +
				(1 - cub->ray.x_step) / 2) / cub->ray.x_rdir;
	else
		cub->ray.wall_dist = (cub->imap.y - cub->y_pos +
				(1 - cub->ray.y_step) / 2) / cub->ray.y_rdir;
}
