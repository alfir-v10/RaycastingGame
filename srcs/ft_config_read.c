

#include <cub.h>

void	ft_config_read(char *line, t_cub *cub)
{
	char	*new_line;
	char	*tmp;
	char	**lines;

	tmp = ft_clear_line(line);
	new_line = ft_strtrim(tmp, " ");
	free(tmp);
	if (!ft_strncmp(new_line, "F ", 2) || !ft_strncmp(new_line, "C ", 2))
	{
		ft_color_read(new_line, cub);
		free(new_line);
		return ;
	}
	lines = ft_split(new_line, ' ');
	free(new_line);
	ft_config_parser(lines, cub);
	ft_free2d(lines);
}
