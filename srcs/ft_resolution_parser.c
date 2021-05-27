
#include <cub.h>

void	ft_resolution_parser(char **lines, t_cub *cub)
{
	if (cub->flag[0] > 0)
		ft_error(7);
	if (!ft_isnum(lines[1]) || !ft_isnum(lines[2]) || lines[3])
		ft_error(7);
	cub->w_win = ft_atoi(lines[1]);
	cub->h_win = ft_atoi(lines[2]);
	if (cub->w_win < 1 || cub->h_win < 1)
		ft_error(7);
	if (cub->w_win > 2560)
		cub->w_win = 2560;
	if (cub->h_win > 1440)
		cub->h_win = 1440;
	cub->flag[0] = 1;
}
