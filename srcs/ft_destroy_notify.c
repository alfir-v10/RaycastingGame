

#include <cub.h>

int	ft_destroy_notify(t_cub *cub)
{
	mlx_destroy_window(cub->ptr_mlx, cub->ptr_win);
	exit(EXIT_SUCCESS);
}
