

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	new_s = (char *)malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2 + 1));
	if (!new_s)
		return (NULL);
	p = new_s;
	while (*s1)
		*new_s++ = *s1++;
	while (*s2)
		*new_s++ = *s2++;
	*new_s = '\0';
	return (p);
}
