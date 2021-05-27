
#include <cub.h>

void	ft_raycast_sprite(t_cub *cub)
{
	int	i;

	i = 0;
	while (i < cub->spr_num)
	{
		cub->spr_ord[i] = i;
		cub->spr_dst[i] = pow(cub->x_pos - cub->sprite[i].x_spr, 2) +
			pow(cub->y_pos - cub->sprite[i].y_spr, 2);
		i++;
	}
	ft_sprite_sorted(cub->spr_ord, cub->spr_dst, cub->spr_num);
	ft_projection(cub);
}
