

#include <cub.h>

void	ft_drawing_sprite(t_cub *cub)
{
	int	x;
	int	y;
	int	color;

	x = cub->draw.sprite.start.x;
	while (x < cub->draw.sprite.end.x && x <= cub->w_win)
	{
		ft_calculate_sprite_x(cub, x);
		if (x >= 0 && cub->draw.sprite.y_trans > 0
			&& cub->draw.sprite.y_trans < cub->draw.z_buf[x])
		{
			y = cub->draw.sprite.start.y;
			while (y < cub->draw.sprite.end.y && y <= cub->h_win + 1)
			{
				ft_calculate_sprite_y(cub, y);
				color = cub->tex[4].img->buff[cub->tex[4].width *
					cub->tex[4].y + cub->tex[4].x];
				if (color != 0)
					my_mlx_pixel_put(&cub->img, x, y, color);
				y++;
			}
		}
		x++;
	}
}
