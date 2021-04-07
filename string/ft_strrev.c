/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 18:38:19 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/04/06 22:36:37 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	ft_strrev(char *str)
{
	int i;
	int j;

	if (!str)
		return ;
	j = ft_strlen(str) - 1;
	i = 0;
	while (i < j)
	{
		ft_swapchr(&str[i], &str[j]);
		i++;
		j--;
	}
}
