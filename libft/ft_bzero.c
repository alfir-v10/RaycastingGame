

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *t;

	t = (unsigned char *)s;
	while (n--)
		*t++ = '\0';
}
