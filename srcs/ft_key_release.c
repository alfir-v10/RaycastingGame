

#include <cub.h>

int	ft_key_release(int code, t_cub *cub)
{
	if (code < 125)
		cub->keys[code] = 0;
	return (0);
}
