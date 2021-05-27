

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *c;

	c = malloc(count * size);
	if (!c)
		return (NULL);
	return (ft_memset(c, 0, size * count));
}
