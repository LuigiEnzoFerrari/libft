#include "libft.h"

int		main(void)
{
	char *str;

	str = ft_itoa(-2147483648);
	printf("%s", str);
	return (0);
}