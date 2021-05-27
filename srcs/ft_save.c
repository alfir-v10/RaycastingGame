

#include <cub.h>

int	ft_save(t_cub *cub)
{
	int	fd;

	if (!(fd = ft_create_bmp("screen.bmp")))
		return (0);
	ft_write_header(fd, cub);
	ft_write_winheight(fd, cub);
	cub->ptr_mlx = mlx_init();
	cub->ptr_win = mlx_new_window(cub->ptr_mlx, cub->w_win,
			cub->h_win, "cub3D");
	ft_set_speed(cub);
	ft_set_texture(cub);
	cub->img.img = mlx_new_image(cub->ptr_mlx, cub->w_win, cub->h_win);
	cub->img.addr = mlx_get_data_addr(cub->img.img, &cub->img.bits_per_pixel,
			&cub->img.size_line, &cub->img.endian);
	ft_raycast_wall(cub);
	ft_raycast_sprite(cub);
	ft_write_data(fd, cub);
	mlx_destroy_image(cub->ptr_mlx, cub->img.img);
	close(fd);
	ft_destroy_notify(cub);
	return (1);
}
