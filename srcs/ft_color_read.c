

#include <cub.h>

void	ft_color_read(char *line, t_cub *cub)
{
	char *new_line;

	if (ft_strchr(line, 'F') && ft_strchr(line, 'C'))
		ft_error(9);
	cub->flag_color = (ft_strchr(line, 'F')) ? 1 : 0;
	new_line = ft_get_color(line);
	if (ft_strchr_count(',', new_line) != 2)
	{
		free(new_line);
		ft_error(9);
	}
	ft_color_parser(new_line, cub);
	free(new_line);
}
