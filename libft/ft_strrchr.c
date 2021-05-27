

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t n;

	n = ft_strlen(s);
	if (s[n] == (char)c)
		return ((char *)(s + n));
	while (n)
	{
		if (s[n - 1] == (char)c)
			return ((char *)(s + n - 1));
		n--;
	}
	return (NULL);
}
