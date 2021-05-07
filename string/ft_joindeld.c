/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_joindeld.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 13:23:47 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/05/07 14:59:16 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_joindeld(char *s1, char const *s2)
{
	char	*ptr;
	size_t	s1_len;
	size_t	s2_len;
	size_t	total_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_len = s2_len + s1_len;
	ptr = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!ptr)
	{
		ft_strdel(&s1);
		return (NULL);
	}
	ft_strcpy(ptr, s1);
	ft_strcat(ptr, s2);
	ft_strdel(&s1);
	return (ptr);
}
