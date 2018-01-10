/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 12:04:27 by csilva            #+#    #+#             */
/*   Updated: 2017/10/13 12:07:27 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*head;
	t_list		*list;

	if (!lst)
		return (NULL);
	list = (*f)(lst);
	head = list;
	while (lst->next)
	{
		lst = lst->next;
		if (!(list->next = (*f)(lst)))
		{
			free(list->next);
			return (NULL);
		}
		list = list->next;
	}
	return (head);
}
