

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needlen;

	if (!*needle)
		return ((char *)haystack);
	needlen = ft_strlen(needle);
	while (*haystack && needlen <= len)
	{
		if (!ft_memcmp(haystack, needle, needlen))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
