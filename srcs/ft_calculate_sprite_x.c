
#include <cub.h>

void	ft_calculate_sprite_x(t_cub *cub, int x)
{
	cub->tex[4].x = (int)(256 * (x - (cub->draw.sprite.win -
					cub->draw.sprite.width / 2)) * cub->tex[4].width /
			cub->draw.sprite.width) / 256;
}
