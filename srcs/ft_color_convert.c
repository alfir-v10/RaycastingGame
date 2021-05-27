

#include <cub.h>

int	ft_color_convert(int red, int green, int blue)
{
	int c;

	c = red & 0xFF;
	c <<= 8;
	c |= green & 0xFF;
	c <<= 8;
	c |= blue & 0xFF;
	return (c);
}
