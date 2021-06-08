#include "ft_string.h"

char	*ft_strccat(char *dest, char *src, int c)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	num;

	num = ft_strclen(src, c);
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (src_len < num)
		ft_strcpy(&dest[dest_len], src);
	else
	{
		ft_strncpy(&dest[dest_len], src, num);
		dest[dest_len + num] = '\0';
	}
	return (dest);
}
