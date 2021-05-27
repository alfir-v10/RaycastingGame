

#include <cub.h>

void	ft_translation(t_cub *cub, int i)
{
	cub->draw.sprite.x = cub->sprite[cub->spr_ord[i]].x_spr - cub->x_pos;
	cub->draw.sprite.y = cub->sprite[cub->spr_ord[i]].y_spr - cub->y_pos;
	cub->draw.sprite.inver = 1.0 / (cub->x_plane * cub->y_dir -
			cub->x_dir * cub->y_plane);
	cub->draw.sprite.x_trans = cub->draw.sprite.inver * (cub->y_dir *
			cub->draw.sprite.x - cub->x_dir * cub->draw.sprite.y);
	cub->draw.sprite.y_trans = cub->draw.sprite.inver * (-cub->y_plane *
			cub->draw.sprite.x + cub->x_plane * cub->draw.sprite.y);
	cub->draw.sprite.win = (int)((cub->w_win / 2) *
			(1 + cub->draw.sprite.x_trans / cub->draw.sprite.y_trans));
}
