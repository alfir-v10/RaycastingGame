

#include "get_next_line.h"

char		*ft_strzchr(char *s, int c, int i)
{
	char a;

	if (!s)
		return (NULL);
	a = (char)c;
	while (*s)
	{
		if (*s == a)
		{
			if (i == 0)
				*s = 0;
			return ((char *)s++);
		}
		s++;
	}
	if (a == '\0')
		return ((char *)s);
	return (NULL);
}
