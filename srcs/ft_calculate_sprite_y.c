

#include <cub.h>

void	ft_calculate_sprite_y(t_cub *cub, int y)
{
	cub->tex[4].y = (((y * 256 - cub->h_win * 128 +
					cub->draw.sprite.height * 128) *
				cub->tex[4].height) / cub->draw.sprite.height) / 256;
}
