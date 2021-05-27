

#include <cub.h>

int	ft_key_press(int code, t_cub *cub)
{
	if (code < 125)
		cub->keys[code] = 1;
	return (0);
}
