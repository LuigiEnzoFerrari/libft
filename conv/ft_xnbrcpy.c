/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xnbrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 22:48:48 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/04/09 13:09:21 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_conv.h"

char	*ft_xnbrcpy(char *dest, unsigned n)
{
	size_t	len;

	len = ft_xnbrlen(n);
	dest[len] = '\0';
	while (len--)
	{
		dest[len] = ft_xtochar(n);
		n /= 16;	
	}
	return (dest);
}
