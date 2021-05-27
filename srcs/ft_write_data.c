

#include <cub.h>

void	ft_write_data(int fd, t_cub *cub)
{
	char	*data;
	int		i;

	data = (char *)cub->img.addr;
	i = 0;
	while (i < cub->h_win)
	{
		write(fd, &data[i * (cub->img.size_line * 4)], cub->w_win * 16);
		i++;
	}
}
