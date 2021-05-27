

#include <cub.h>

int	ft_keyboard(t_cub *cub)
{
	if (cub->keys[W_KEY])
		ft_move(cub, cub->x_dir, cub->y_dir);
	if (cub->keys[LEFT_KEY])
		ft_turn(cub, cub->rotate_speed);
	if (cub->keys[D_KEY])
		ft_move(cub, cub->x_plane, cub->y_plane);
	if (cub->keys[S_KEY])
		ft_move(cub, -cub->x_dir, -cub->y_dir);
	if (cub->keys[RIGHT_KEY])
		ft_turn(cub, -cub->rotate_speed);
	if (cub->keys[A_KEY])
		ft_move(cub, -cub->x_plane, -cub->y_plane);
	if (cub->keys[ESC_KEY])
		ft_destroy_notify(cub);
	return (0);
}
