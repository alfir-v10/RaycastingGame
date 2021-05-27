

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *dest;
	unsigned char n;

	dest = (unsigned char *)b;
	n = (unsigned char)c;
	while (len--)
		*dest++ = n;
	return (b);
}
