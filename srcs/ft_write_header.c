
#include <cub.h>

void	ft_write_header(int fd, t_cub *cub)
{
	static unsigned char	header[14];
	int						size;

	ft_bzero(header, sizeof(header));
	size = cub->w_win * cub->h_win * 4 + 54;
	header[0] = (unsigned char)0x42;
	header[1] = (unsigned char)0x4D;
	header[2] = (unsigned char)(size);
	header[3] = (unsigned char)(size >> 8);
	header[4] = (unsigned char)(size >> 16);
	header[5] = (unsigned char)(size >> 24);
	header[10] = (unsigned char)54;
	write(fd, header, sizeof(header));
}
