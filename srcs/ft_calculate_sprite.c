

#include <cub.h>

void	ft_calculate_sprite(t_cub *cub)
{
	cub->draw.sprite.height = abs((int)(cub->h_win / cub->draw.sprite.y_trans));
	cub->draw.sprite.start.y = (cub->h_win / 2) - (cub->draw.sprite.height / 2);
	if (cub->draw.sprite.start.y < 0)
		cub->draw.sprite.start.y = 0;
	cub->draw.sprite.end.y = cub->draw.sprite.start.y + cub->draw.sprite.height;
	if (cub->draw.sprite.end.y >= cub->h_win)
		cub->draw.sprite.end.y = cub->h_win;
	cub->draw.sprite.width = abs((int)(cub->h_win / cub->draw.sprite.y_trans));
	cub->draw.sprite.start.x = cub->draw.sprite.win -
		(cub->draw.sprite.width / 2);
	if (cub->draw.sprite.start.x < 0)
		cub->draw.sprite.start.x = 0;
	cub->draw.sprite.end.x = cub->draw.sprite.width / 2 + cub->draw.sprite.win;
	if (cub->draw.sprite.end.x >= cub->w_win)
		cub->draw.sprite.end.x = cub->w_win;
}
