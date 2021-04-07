/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 18:37:04 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/09 00:27:27 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swapchr(char *a, char *b)
{
	char x;

	if (!a || !b)
		return ;
	x = a[0];
	a[0] = b[0];
	b[0] = x;
}
