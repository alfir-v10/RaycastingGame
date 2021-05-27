

#include "cub.h"

void	ft_map_read(char *line, t_cub *cub)
{
	char *tmp;

	tmp = line;
	while (*line)
	{
		if (!ft_setchr(*line, " 012NWSE\t"))
			ft_error(10);
		if (*line == '2')
			cub->spr_num++;
		line++;
	}
	cub->mcols = (cub->mcols < (int)ft_strlen(tmp)) ?
		(int)ft_strlen(tmp) : cub->mcols;
	cub->mrows++;
}
