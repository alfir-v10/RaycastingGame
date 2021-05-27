

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	n;

	if (!s || !f)
		return (NULL);
	new = (char *)malloc(ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	n = 0;
	while (s[n])
	{
		new[n] = f(n, s[n]);
		n++;
	}
	new[n] = '\0';
	return (new);
}
