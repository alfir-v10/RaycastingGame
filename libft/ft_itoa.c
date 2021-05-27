

#include "libft.h"

static int	counter(int n)
{
	int m;

	m = 0;
	if (n < 0)
	{
		m++;
		n *= -1;
	}
	while (n >= 10)
	{
		n /= 10;
		m++;
	}
	return (m + 1);
}

char		*ft_itoa(int n)
{
	int		count;
	int		m;
	char	*new;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	count = counter(n);
	new = (char *)malloc(count + 1);
	if (!new)
		return (0);
	m = 0;
	if (n < 0)
	{
		new[m] = '-';
		n *= -1;
	}
	m = count - 1;
	while (n >= 10)
	{
		new[m--] = n % 10 + '0';
		n /= 10;
	}
	new[m] = n % 10 + '0';
	new[count] = '\0';
	return (new);
}
