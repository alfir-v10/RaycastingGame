

#include <cub.h>

void	ft_sprite_sorted(int *spr_ord, double *spr_dist, int spr_num)
{
	double	tmp_d;
	int		tmp_o;
	int		n;
	int		i;

	i = 0;
	while (i < spr_num - 1)
	{
		n = 0;
		while (n < spr_num - 1)
		{
			if (spr_dist[n] < spr_dist[n + 1])
			{
				tmp_d = spr_dist[n + 1];
				spr_dist[n + 1] = spr_dist[n];
				spr_dist[n] = tmp_d;
				tmp_o = spr_ord[n + 1];
				spr_ord[n + 1] = spr_ord[n];
				spr_ord[n] = tmp_o;
			}
			n++;
		}
		i++;
	}
}
