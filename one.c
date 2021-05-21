#include "libft.h"

int main	(void)
{
	char **str;
	size_t i;

	i = 0;
	str = ft_split ("JAN,,,,,,,,FEB,MAR", ',');
	while (str[i])
		printf("%s", str[i++]);
	return (0);
}