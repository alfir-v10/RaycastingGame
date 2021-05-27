
#include <cub.h>

void	ft_set_texture(t_cub *cub)
{
	int	i;

	i = 0;
	while (i < 5)
	{
		if (!(cub->tex[i].img = mlx_xpm_file_to_image(cub->ptr_mlx,
						cub->tex[i].path, &cub->tex[i].width,
						&cub->tex[i].height)))
			ft_error(12);
		if (!(cub->tex[i].img->buff = (int *)mlx_get_data_addr(cub->tex[i].img,
						&cub->tex[i].img->bits_per_pixel,
						&cub->tex[i].img->size_line, &cub->tex[i].img->endian)))
			ft_error(12);
		i++;
	}
}
