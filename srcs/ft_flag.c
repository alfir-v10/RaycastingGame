

#include <cub.h>

int	ft_flag_check(t_cub *cub)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (cub->flag[i] == 0)
			return (0);
		i++;
	}
	return (1);
}
