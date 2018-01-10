/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 21:38:05 by csilva            #+#    #+#             */
/*   Updated: 2017/09/25 22:34:30 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *add;

	add = (unsigned char *)s;
	if (!n)
		return (NULL);
	while (n)
	{
		if (*add == (unsigned char)c)
			return (add);
		else
		{
			add++;
			n--;
		}
	}
	return (NULL);
}
