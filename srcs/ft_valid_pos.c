

#include <cub.h>

int	ft_valid_pos(t_cub *cub, int m, int n)
{
	if (ft_setchr(cub->map[m + 1][n + 1], " \0") ||
		ft_setchr(cub->map[m - 1][n - 1], " \0") ||
		ft_setchr(cub->map[m + 1][n - 1], " \0") ||
		ft_setchr(cub->map[m - 1][n + 1], " \0") ||
		ft_setchr(cub->map[m][n + 1], " \0") ||
		ft_setchr(cub->map[m + 1][n], " \0"))
		ft_error(10);
	return (1);
}
