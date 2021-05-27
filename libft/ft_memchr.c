

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *arr;
	unsigned char ac;

	arr = (unsigned char *)s;
	ac = (unsigned char)c;
	while (n)
	{
		if (*arr == ac)
			return (arr);
		arr++;
		n--;
	}
	return (NULL);
}
