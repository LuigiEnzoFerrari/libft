#include "ft_string.h"

char	*ft_skipctype(char *str, int (f)(int), int a)
{
	if (a)
		while (f(*str))
			str++;
	else
		while (!f(*str))
			str++;
	return (str);
}
