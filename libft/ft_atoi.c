

int		ft_atoi(const char *str)
{
	int zero;
	int one;

	zero = 0;
	one = 1;
	while (((*str >= 9 && *str <= 13) || (*str == 32)) && *str)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			one = 0;
		str++;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		zero *= 10;
		zero = (one ? zero + (*str - '0') : zero - (*str - '0'));
		str++;
	}
	return (zero);
}
