
#include <cub.h>

void	ft_init(t_cub *cub, char *path)
{
	int		fd;
	char	*line;

	if (!(cub->sprite = (t_spair *)malloc(sizeof(t_spair) * cub->spr_num)) ||
	!(cub->spr_ord = (int *)malloc(sizeof(int) * cub->spr_num)) ||
	!(cub->spr_dst = (double *)malloc(sizeof(double) * cub->spr_num)))
		ft_error(12);
	if (ft_init_map(cub))
	{
		fd = ft_open_file(path);
		line = NULL;
		while (get_next_line(fd, &line) == 1)
		{
			ft_make_map(line, cub);
			free(line);
		}
		free(line);
		close(fd);
		ft_map_valid(cub);
	}
}
