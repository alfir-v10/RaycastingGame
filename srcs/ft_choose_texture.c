

#include <cub.h>

int	ft_choose_texture(t_cub *cub)
{
	int tmp;

	tmp = 0;
	if (cub->ray.side == 1)
		tmp = (cub->ray.y_rdir > 0) ? 2 : 3;
	else
		tmp = (cub->ray.x_rdir > 0) ? 1 : 0;
	return (tmp);
}
