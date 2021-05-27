

#include <cub.h>

void	ft_draw(t_cub *cub, int x, int i)
{
	int y;
	int color;

	y = 0;
	while (y < cub->h_win)
	{
		if (y < cub->draw.start)
			my_mlx_pixel_put(&cub->img, x, y, cub->draw.ceil_color);
		if (y >= cub->draw.start && y <= cub->draw.end)
		{
			cub->tex[i].y = (int)cub->tex[i].pos & (cub->tex[i].height - 1);
			cub->tex[i].pos += cub->tex[i].step;
			color = cub->tex[i].img->buff[cub->tex[i].height *
				cub->tex[i].y + cub->tex[i].x];
			my_mlx_pixel_put(&cub->img, x, y, color);
		}
		if (y > cub->draw.end)
			my_mlx_pixel_put(&cub->img, x, y, cub->draw.floor_color);
		y++;
	}
}
