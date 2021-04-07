/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 00:47:07 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/04/07 11:14:11 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_put.h"

void	ft_putsstr(char *str, char *substr)
{
	size_t i;

	i = ft_strslen(str, substr);
	if (str)
		while (*str != '\0' && i--)
			ft_putchar(*str++);
}
