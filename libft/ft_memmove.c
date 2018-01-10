/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 19:40:04 by csilva            #+#    #+#             */
/*   Updated: 2017/09/25 23:26:19 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*source;
	unsigned char	*destination;
	int				i;

	source = (unsigned char *)src;
	destination = (unsigned char *)dst;
	i = 0;
	while (len)
	{
		if (src <= dst)
			destination[len - 1] = source[len - 1];
		else
		{
			destination[i] = source[i];
			i++;
		}
		len--;
	}
	return (dst);
}
