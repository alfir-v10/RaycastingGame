

#include <cub.h>

void	ft_map_valid(t_cub *cub)
{
	int	m;
	int	n;

	if (!ft_line_valid(cub->map[0]))
		ft_error(10);
	cub->spr_num = 0;
	m = 0;
	while (m < cub->mrows)
	{
		n = 0;
		while (cub->map[m][n] != '\0')
		{
			if (!ft_setchr(cub->map[m][n], " 1"))
				ft_valid_pos(cub, m, n);
			if (ft_setchr(cub->map[m][n], "NWSE"))
				ft_set_player_param(cub, m, n);
			if (cub->map[m][n] == '2')
				ft_set_sprite_param(cub, m, n);
			n++;
		}
		m++;
	}
	if (!cub->flag_player)
		ft_error(11);
}
