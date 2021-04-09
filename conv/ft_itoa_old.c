/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 18:46:36 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/04/07 16:47:10 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_conv.h"

static void	ft_itoc(char *str, int n, int i)
{
	long int	num;

	num = n;
	if (n < 0)
		num *= -1;
	if (num >= 10)
		ft_itoc(str, (num / 10), i - 1);
	str[i] = ((num % 10) + '0');
}

char		*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	len = ft_nbrlen(n);
	if (n < 0)
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_itoc(str, n, len - 1);
	if (n < 0)
		str[0] = '-';
	str[len] = '\0';
	return (str);
}
