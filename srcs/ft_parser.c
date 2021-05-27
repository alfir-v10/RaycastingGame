

#include <cub.h>

int	ft_parser(t_cub *cub, char *path)
{
	char	*line;
	int		fd;
	int		ret;

	line = NULL;
	fd = ft_open_file(path);
	while ((ret = get_next_line(fd, &line)) == 1)
	{
		if (!((*line == '\0' || ft_is_empty_line(line)) && !cub->mrows))
		{
			if (ft_setchr(line[0], " 1\t\0") && ft_flag_check(cub) == 1)
				ft_map_read(line, cub);
			else
				ft_config_read(line, cub);
		}
		free(line);
	}
	if (ret == 0)
		free(line);
	close(fd);
	return (1);
}
