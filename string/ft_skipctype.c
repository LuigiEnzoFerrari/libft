/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_c_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 22:22:04 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/08/01 22:22:05 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_skip_c_type(char *str, int (f)(int), int a)
{
	if (a)
		while (f(*str))
			str++;
	else
		while (!f(*str))
			str++;
	return (str);
}
