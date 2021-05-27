

#include <cub.h>

void	ft_calculate_step_and_side(t_cub *cub)
{
	if (cub->ray.x_rdir < 0)
	{
		cub->ray.x_step = -1;
		cub->ray.x_sdist = (cub->x_pos - cub->imap.x) * cub->ray.x_ddist;
	}
	else
	{
		cub->ray.x_step = 1;
		cub->ray.x_sdist = (cub->imap.x + 1.0 - cub->x_pos) * cub->ray.x_ddist;
	}
	if (cub->ray.y_rdir < 0)
	{
		cub->ray.y_step = -1;
		cub->ray.y_sdist = (cub->y_pos - cub->imap.y) * cub->ray.y_ddist;
	}
	else
	{
		cub->ray.y_step = 1;
		cub->ray.y_sdist = (cub->imap.y + 1.0 - cub->y_pos) * cub->ray.y_ddist;
	}
}
