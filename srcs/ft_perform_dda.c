

#include <cub.h>

void	ft_perform_dda(t_cub *cub)
{
	cub->ray.hit = 0;
	while (cub->ray.hit == 0)
	{
		if (cub->ray.x_sdist < cub->ray.y_sdist)
		{
			cub->ray.x_sdist += cub->ray.x_ddist;
			cub->imap.x += cub->ray.x_step;
			cub->ray.side = 0;
		}
		else
		{
			cub->ray.y_sdist += cub->ray.y_ddist;
			cub->imap.y += cub->ray.y_step;
			cub->ray.side = 1;
		}
		if (cub->map[cub->imap.x][cub->imap.y] == '1')
			cub->ray.hit = 1;
	}
}
