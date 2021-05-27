

#include <cub.h>

void	ft_raycast_wall(t_cub *cub)
{
	int i;

	cub->ray.x = 0;
	while (cub->ray.x < cub->w_win)
	{
		cub->ray.x_cam = (2 * cub->ray.x) / (double)cub->w_win - 1;
		cub->ray.x_rdir = cub->x_dir + cub->x_plane * cub->ray.x_cam;
		cub->ray.y_rdir = cub->y_dir + cub->y_plane * cub->ray.x_cam;
		cub->imap.x = (int)cub->x_pos;
		cub->imap.y = (int)cub->y_pos;
		cub->ray.x_ddist = ft_pythagoras(cub->ray.y_rdir, cub->ray.x_rdir);
		cub->ray.y_ddist = ft_pythagoras(cub->ray.x_rdir, cub->ray.y_rdir);
		ft_calculate_step_and_side(cub);
		ft_perform_dda(cub);
		ft_calculate_wall_dist(cub);
		cub->draw.z_buf[cub->ray.x] = cub->ray.wall_dist;
		ft_calculate_height(cub);
		i = ft_choose_texture(cub);
		ft_calculate_wall_side_x(cub, i);
		ft_draw(cub, cub->ray.x, i);
		cub->ray.x++;
	}
}
