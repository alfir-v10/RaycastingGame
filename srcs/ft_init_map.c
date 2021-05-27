

#include <cub.h>

int	ft_init_map(t_cub *cub)
{
	int	i;

	if (!(cub->map = (char **)malloc(sizeof(char *) * cub->mrows)))
		return (0);
	i = 0;
	while (i < cub->mrows)
	{
		if (!(cub->map[i] = (char *)malloc(cub->mcols)))
			return (0);
		i++;
	}
	return (1);
}
