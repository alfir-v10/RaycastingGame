

#include <cub.h>

void	ft_calculate_wall_side_x(t_cub *cub, int i)
{
	if (cub->ray.side == 0)
		cub->ray.x_wall = cub->y_pos + cub->ray.wall_dist * cub->ray.y_rdir;
	else
		cub->ray.x_wall = cub->x_pos + cub->ray.wall_dist * cub->ray.x_rdir;
	cub->ray.x_wall -= floor(cub->ray.x_wall);
	cub->tex[i].x = (int)(cub->ray.x_wall * (double)cub->tex[i].width);
	if (cub->ray.side == 0 && cub->ray.x_rdir > 0)
		cub->tex[i].x = cub->tex[i].width - cub->tex[i].x - 1;
	if (cub->ray.side == 1 && cub->ray.y_rdir < 0)
		cub->tex[i].x = cub->tex[i].width - cub->tex[i].x - 1;
	cub->tex[i].step = 1.0 * cub->tex[i].height / cub->draw.height;
	cub->tex[i].pos = (cub->draw.start - cub->h_win / 2 +
			cub->draw.height / 2) * cub->tex[i].step;
}
