

#include <cub.h>

void	ft_set_sprite_param(t_cub *cub, int m, int n)
{
	int num;

	num = cub->spr_num;
	cub->sprite[num].x_spr = (double)m + 0.5;
	cub->sprite[num].y_spr = (double)n + 0.5;
	cub->spr_num++;
}
