

#include <cub.h>

void	ft_config_parser(char **lines, t_cub *cub)
{
	if (!ft_strcmp(*lines, "R"))
		ft_resolution_parser(lines, cub);
	else if (ft_compare(lines))
	{
		if (lines[2] || !lines[1])
			ft_error(8);
		if (!ft_is_fmt(lines[1], ".xpm") || !ft_is_file(lines[1]))
			ft_error(8);
		ft_save_path(lines[0], lines[1], cub);
	}
	else
		ft_error(5);
}
