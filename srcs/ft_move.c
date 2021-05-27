

#include <cub.h>

void	ft_move(t_cub *cub, double x, double y)
{
	double dx;
	double dy;

	dx = x * COLL_OFFSET;
	dy = y * COLL_OFFSET;
	if (cub->map[(int)(cub->x_pos + dx * cub->move_speed)][(int)cub->y_pos] !=
			'1')
		cub->x_pos += x * cub->move_speed;
	if (cub->map[(int)cub->x_pos][(int)(cub->y_pos + dy * cub->move_speed)] !=
			'1')
		cub->y_pos += y * cub->move_speed;
	ft_set_display(cub);
}
