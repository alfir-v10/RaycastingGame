
#include <cub.h>

void	ft_calculate_height(t_cub *cub)
{
	cub->draw.height = cub->h_win / cub->ray.wall_dist;
	cub->draw.start = cub->h_win / 2 - cub->draw.height / 2;
	if (cub->draw.start < 0)
		cub->draw.start = 0;
	cub->draw.end = cub->draw.start + cub->draw.height;
	if (cub->draw.end >= cub->h_win)
		cub->draw.end = cub->h_win - 1;
}
