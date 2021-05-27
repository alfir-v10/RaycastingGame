

#include <cub.h>

void	ft_check_argv(int argc, char *path, char *save)
{
	if (argc < 2 || argc > 3)
		ft_error(1);
	if (argc == 3 && ft_strcmp(path, "--save"))
		ft_error(2);
	if (!ft_endwith(save, ".cub"))
		ft_error(3);
}
