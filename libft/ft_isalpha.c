

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((96 < c && c < 123) || (64 < c && c < 91));
}
