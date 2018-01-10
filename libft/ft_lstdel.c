/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 11:49:11 by csilva            #+#    #+#             */
/*   Updated: 2017/10/13 12:01:38 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;

	while (*alst)
	{
		temp = *alst;
		(*del)((*alst)->content, (*alst)->content_size);
		*alst = (*alst)->next;
		free(temp);
		temp = NULL;
	}
	alst = NULL;
}
