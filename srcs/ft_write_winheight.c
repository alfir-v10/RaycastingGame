
#include <cub.h>

void	ft_write_winheight(int fd, t_cub *cub)
{
	static unsigned char	header[40];

	ft_bzero(header, sizeof(header));
	header[0] = (unsigned char)sizeof(header);
	header[4] = (unsigned char)(cub->w_win);
	header[5] = (unsigned char)(cub->w_win >> 8);
	header[6] = (unsigned char)(cub->w_win >> 16);
	header[7] = (unsigned char)(cub->w_win >> 24);
	header[8] = (unsigned char)(-cub->h_win);
	header[9] = (unsigned char)(-cub->h_win >> 8);
	header[10] = (unsigned char)(-cub->h_win >> 16);
	header[11] = (unsigned char)(-cub->h_win >> 24);
	header[12] = (unsigned char)1;
	header[14] = (unsigned char)32;
	write(fd, header, sizeof(header));
}
