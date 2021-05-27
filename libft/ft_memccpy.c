

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	a;
	size_t			m;

	if (!n)
		return (NULL);
	m = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	a = (unsigned char)c;
	while (m < n)
	{
		d[m] = s[m];
		if (s[m] == a)
		{
			m++;
			return (dst + m);
		}
		m++;
	}
	return (NULL);
}
