

#include <cub.h>

int	ft_error(int code)
{
	if (code == 1)
		printf("ArgumentError");
	else if (code == 2)
		printf("SaveError");
	else if (code == 3)
		printf("MapFormatError");
	else if (code == 4)
		printf("FileNotFoundError");
	else if (code == 5)
		printf("FileInfoError");
	else if (code == 6)
		printf("MapNotFoundError");
	else if (code == 7)
		printf("InvalResError");
	else if (code == 8)
		printf("InvalTexError");
	else if (code == 9)
		printf("InvalColorError");
	else if (code == 10)
		printf("InvalMapError");
	else if (code == 11)
		printf("InvalPosPlayerError");
	else if (code == 12)
		printf("UndefinedError");
	exit(EXIT_FAILURE);
}
