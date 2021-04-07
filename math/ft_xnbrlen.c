/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xnbrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 12:23:22 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/31 12:23:54 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_xnbrlen(unsigned n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (1);
	while (n)
	{
		n = (n / 16);
		i++;
	}
	return (i);
}