

#include <cub.h>

void	ft_projection(t_cub *cub)
{
	int	i;

	i = 0;
	while (i < cub->spr_num)
	{
		ft_translation(cub, i);
		ft_calculate_sprite(cub);
		ft_drawing_sprite(cub);
		i++;
	}
}
