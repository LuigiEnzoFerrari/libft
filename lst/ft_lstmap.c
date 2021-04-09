/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 17:41:05 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/04/09 19:24:33 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *list;

	if (!lst)
		return (0);
	list = ft_lstnew(f(lst->content));
	if (!list)
	{
		ft_lstclear(&list, del);
		return (0);
	}
	list->next = ft_lstmap(lst->next, f, del);
	return (list);
}
