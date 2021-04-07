/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:31:05 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/04/06 22:35:40 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	unsigned int	src_len;

	if (!src)
		return (0);
	src_len = ft_strlen(src);
	if (len == 0)
		return (src_len);
	if (src_len >= len)
	{
		ft_memcpy(dest, src, len - 1);
		dest[len - 1] = '\0';
		return (src_len);
	}
	ft_memcpy(dest, src, src_len);
	dest[src_len] = '\0';
	return (src_len);
}
