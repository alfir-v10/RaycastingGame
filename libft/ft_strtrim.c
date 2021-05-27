

#include "libft.h"

static int	func(char const a, char const *set)
{
	while (*set)
	{
		if (*set++ == a)
			return (1);
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char		*new_s;
	const char	*tmp;
	size_t		n;
	size_t		m;
	size_t		s_len;

	if (!s1 || !set)
		return (NULL);
	tmp = s1;
	n = 0;
	while (func(*s1++, set))
		n++;
	s_len = ft_strlen(s1);
	while (*s1)
		s1++;
	m = 0;
	while (func(*--s1, set))
		m++;
	new_s = ft_substr(tmp, n, s_len - m + 1);
	if (!new_s)
		return (NULL);
	return (new_s);
}
