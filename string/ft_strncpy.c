/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 11:23:48 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/06/08 18:15:50 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strncpy(char *dest, const char *src, size_t num)
{
	size_t	maxlen;

	maxlen = ft_strnlen(src, num);
	ft_memcpy(dest, src, maxlen);
	if (maxlen < num)
		ft_memset(dest + maxlen, '\0', num - maxlen);
	return (dest);
}
