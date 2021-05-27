
#include <cub.h>

void	ft_set_display(t_cub *cub)
{
	cub->img.img = mlx_new_image(cub->ptr_mlx, cub->w_win, cub->h_win);
	cub->img.addr = mlx_get_data_addr(cub->img.img, &cub->img.bits_per_pixel,
			&cub->img.size_line, &cub->img.endian);
	ft_raycast_wall(cub);
	ft_raycast_sprite(cub);
	mlx_clear_window(cub->ptr_mlx, cub->ptr_win);
	mlx_put_image_to_window(cub->ptr_mlx, cub->ptr_win, cub->img.img, 0, 0);
	mlx_destroy_image(cub->ptr_mlx, cub->img.img);
}
