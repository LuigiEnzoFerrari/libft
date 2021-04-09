/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 13:22:29 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/04/09 13:44:18 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_conv.h"

char	*ft_utoa(unsigned n)
{
	size_t	len;
	char	*str;

	len = ft_unbrlen(n) + 1;
	str = (char *)malloc(sizeof(char) * len);
	ft_unbrcpy(str, n);
	return (str);
}
