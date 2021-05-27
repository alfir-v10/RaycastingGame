

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *t1;
	unsigned char *t2;

	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	while (n)
	{
		if (*t1 != *t2)
			return ((int)(*t1 - *t2));
		t1++;
		t2++;
		n--;
	}
	return (0);
}
