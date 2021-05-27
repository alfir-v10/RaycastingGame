

#include <cub.h>

void	ft_color_save(char **lines, t_cub *cub, int flag_color)
{
	cub->red = ft_atoi(lines[0]);
	cub->green = ft_atoi(lines[1]);
	cub->blue = ft_atoi(lines[2]);
	if (!ft_inrange(cub->red, 0, 255) ||
			!ft_inrange(cub->green, 0, 255) || !ft_inrange(cub->blue, 0, 255))
		ft_error(9);
	if (flag_color == 0)
	{
		if (cub->flag[7] == 1)
			ft_error(9);
		cub->draw.ceil_color = ft_color_convert(cub->red,
				cub->green, cub->blue);
		cub->flag[7] = 1;
		cub->c_color_save++;
	}
	else if (flag_color == 1)
	{
		if (cub->flag[6] == 1)
			ft_error(9);
		cub->draw.floor_color = ft_color_convert(cub->red, cub->green,
				cub->blue);
		cub->flag[6] = 1;
		cub->f_color_save++;
	}
}
