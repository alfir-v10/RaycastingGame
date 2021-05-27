

#include <cub.h>

void	ft_color_parser(char *line, t_cub *cub)
{
	char	**lines;

	if (!ft_strchr(line, ',') || ft_strchr_count(',', line) != 2)
		ft_error(9);
	lines = ft_split(line, ',');
	if (lines[3] || !lines[2])
	{
		ft_free2d(lines);
		ft_error(9);
	}
	if (!ft_isnum(lines[0]) || !ft_isnum(lines[1]) || !ft_isnum(lines[2]))
	{
		ft_free2d(lines);
		ft_error(9);
	}
	ft_color_save(lines, cub, cub->flag_color);
	ft_free2d(lines);
}
