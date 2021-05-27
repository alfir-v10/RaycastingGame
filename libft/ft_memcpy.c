

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	unsigned char *dest;
	unsigned char *src;

	if (!destination && !source)
		return (NULL);
	dest = (unsigned char *)destination;
	src = (unsigned char *)source;
	while (n--)
		*dest++ = *src++;
	return (destination);
}
