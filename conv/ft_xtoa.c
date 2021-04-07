/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 18:08:31 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/31 12:34:52 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char		*ft_xtoa(unsigned n)
{
	char		*ptr;
	unsigned	temp;
	unsigned	i;

	i = 0;
	temp = 0;
	if (!n)
		return (ft_strdup("0"));
	ptr = (char *)malloc(sizeof(char) * (ft_xnbrlen(n) + 1));
	while (n)
	{
		temp = n % 16;
		if (temp >= 10)
			ptr[i] = temp + 87;
		else
			ptr[i] = temp + 48;
		i++;
		n = n / 16;
	}
	ptr[i] = '\0';
	ft_strrev(ptr);
	return (ptr);
}
