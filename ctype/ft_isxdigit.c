/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:39:30 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/04/07 01:46:03 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

int		ft_isxdigit(int c)
{
	if (ft_isdigit(c) || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f'))
		return (1);
	return (0);
}
