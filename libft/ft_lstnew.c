/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 19:58:13 by csilva            #+#    #+#             */
/*   Updated: 2017/10/13 16:17:40 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *list;

	list = (t_list *)ft_memalloc(sizeof(t_list));
	if (list && content)
	{
		list->content = (void *)malloc(sizeof(content_size));
		if (!list->content)
		{
			ft_memdel((void *)&list);
			return (0);
		}
		ft_memcpy(list->content, content, content_size);
		list->content_size = content_size;
	}
	return (list);
}
